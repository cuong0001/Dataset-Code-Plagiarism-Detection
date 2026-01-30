import os
import re
import random
import string

# --- CẤU HÌNH ---
DATASET_ROOT = "dataset"
ALL_CHARS = list(string.ascii_lowercase)

KEYWORDS = [
    'if', 'else', 'do', 'while', 'for', 'return', 'int', 'float', 'double', 'char', 'void',
    'struct', 'long', 'const', 'static', 'sizeof', 'include', 'define', 'main', 'using', 'namespace',
    'def', 'class', 'import', 'from', 'print', 'input', 'range', 'len', 'not', 'and', 'or',
    'break', 'continue', 'true', 'false', 'std', 'vector', 'string', 'map', 'set', 'cin', 'cout',
    'printf', 'scanf', 'malloc', 'free', 'None', 'True', 'False'
]

COMMON_VARS = [c for c in ALL_CHARS if c not in KEYWORDS] + \
              ['cnt', 'ans', 'sum', 'res', 'val', 'pos', 'tmp', 'temp', 'flag', 'check', 'mx', 'mn']

def random_string(length=4):
    return ''.join(random.choices(string.ascii_lowercase, k=length))

def detect_language(filename):
    if filename.endswith(".cpp"): return "cpp"
    if filename.endswith(".c"): return "c"
    if filename.endswith(".py"): return "python"
    return "unknown"

# --- 1. COMMENT CHEAT ---
def cheat_comment(code, lang):
    lines = code.split('\n')
    new_lines = []
    cmt = "#" if lang == 'python' else "//"
    for line in lines:
        new_lines.append(line)
        if len(line.strip()) > 5 and random.random() < 0.4:
            indent = line[:len(line)-len(line.lstrip())]
            new_lines.append(f"{indent}{cmt} Note: {random_string(5)}")
    return f"{cmt} CHEAT: Comments\n" + "\n".join(new_lines)

# --- 2. RENAME CHEAT ---
def cheat_rename(code, lang):
    lines = code.split('\n')
    new_lines = []
    safe_indices = []
    for i, line in enumerate(lines):
        s = line.strip()
        is_safe = True
        if (lang in ['cpp', 'c']) and s.startswith('#'): is_safe = False
        if (lang == 'cpp') and s.startswith('using'): is_safe = False
        if (lang == 'python') and (s.startswith('import') or s.startswith('from')): is_safe = False
        if is_safe: safe_indices.append(i)

    safe_text = "\n".join([lines[i] for i in safe_indices])
    vars_found = [v for v in COMMON_VARS if re.search(rf"\b{v}\b", safe_text)]
    if not vars_found:
        raw = re.findall(r"\b[a-z]{1,2}\b", safe_text)
        vars_found = [v for v in raw if v not in KEYWORDS]

    mapping = {}
    if vars_found:
        targets = random.sample(vars_found, min(len(vars_found), 5))
        for t in targets:
            mapping[t] = f"_{t}_{random_string(2)}"

    for i in range(len(lines)):
        line = lines[i]
        if i in safe_indices:
            for old, new in mapping.items():
                line = re.sub(rf"\b{old}\b", new, line)
        new_lines.append(line)
    cmt = "#" if lang == 'python' else "//"
    return f"{cmt} CHEAT: Renamed {len(mapping)} vars\n" + "\n".join(new_lines)

# --- 3. FORMAT CHEAT ---
def cheat_format(code, lang):
    lines = code.split('\n')
    new_lines = []
    cmt = "#" if lang == 'python' else "//"
    for line in lines:
        s = line.strip()
        if not s: continue
        if lang != 'python':
            new_lines.append((" " * random.randint(0, 3)) + s)
        else:
            new_lines.append(line)
        if random.random() < 0.3: new_lines.append("")
    return f"{cmt} CHEAT: Reformat\n" + "\n".join(new_lines)

# --- 4. HEADER CHEAT ---
def cheat_header(code, lang):
    v = random.randint(100,999)
    name = random_string(4).upper()
    head = ""
    cmt = ""
    if lang == 'cpp': 
        head = f"#define MAX_{name} {v}\ntypedef long long ll_{name};\n"
        cmt = "//"
    elif lang == 'c': 
        head = f"#define LIMIT_{name} {v}\n#include <stdlib.h>\n"
        cmt = "//"
    elif lang == 'python': 
        head = f"MAX_{name} = {v}\n"
        cmt = "#"
    return f"{cmt} CHEAT: Header\n" + head + code

# --- 5. COMBO CHEAT ---
def cheat_combo(code, lang):
    c = cheat_rename(code, lang)
    c = cheat_comment(c, lang)
    c = cheat_header(c, lang)
    return c

STRATEGIES = [
    ("comment", cheat_comment), ("rename", cheat_rename), 
    ("format", cheat_format), ("header", cheat_header), ("combo", cheat_combo)
]

def main():
    if not os.path.exists(DATASET_ROOT):
        print(f"Lỗi: Không tìm thấy folder '{DATASET_ROOT}'")
        return
    print("Bắt đầu tạo cheat cho dataset...")

    count_created = 0

    # Duyệt: dataset -> 1A -> 1A-C
    for p_folder in os.listdir(DATASET_ROOT): # VD: 1A
        p_path = os.path.join(DATASET_ROOT, p_folder)
        if not os.path.isdir(p_path): continue
        
        for l_folder in os.listdir(p_path): # VD: 1A-C
            l_path = os.path.join(p_path, l_folder)
            if not os.path.isdir(l_path): continue
            
            # --- PHẦN SỬA LỖI Ở ĐÂY ---
            # Lọc các file có đuôi .c, .cpp, .py VÀ không có chữ 'cheat'
            files = [f for f in os.listdir(l_path) 
                     if (f.endswith('.c') or f.endswith('.cpp') or f.endswith('.py')) 
                     and "cheat" not in f]
            
            # Sắp xếp theo tên để đảm bảo thứ tự xử lý
            files.sort()
            
            if not files: continue
            # print(f"Xử lý: {l_folder} ({len(files)} bài gốc)")
            
            for i, fname in enumerate(files):
                # Xoay vòng chiến thuật: file 1->1, 2->2...
                strat_idx = i % 5 
                strat_name, strat_func = STRATEGIES[strat_idx]
                
                lang = detect_language(fname)
                if lang == 'unknown': continue
                
                try:
                    fpath = os.path.join(l_path, fname)
                    with open(fpath, "r", encoding="utf-8") as f: code = f.read()
                    
                    cheat_code = strat_func(code, lang)
                    
                    # Tạo tên file: 360446481_cheat_comment.c
                    base, ext = os.path.splitext(fname)
                    new_name = f"{base}_cheat_{strat_name}{ext}"
                    new_path = os.path.join(l_path, new_name)
                    
                    with open(new_path, "w", encoding="utf-8") as f:
                        f.write(cheat_code)
                    
                    print(f"  + Tạo: {new_name}")
                    count_created += 1

                except Exception as e:
                    print(f"Lỗi file {fname}: {e}")

    print(f"\nHOÀN TẤT! Đã tạo thêm {count_created} file cheat.")

if __name__ == "__main__":
    main()
    