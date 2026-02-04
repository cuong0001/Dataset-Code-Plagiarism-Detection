import os
import re
import random
import string

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

def cheat_comment(code, lang):
    lines = code.split('\n')
    new_lines = []
    
    if lang == 'python':
        line_cmt = "#"
        open_blk = '"""'
        close_blk = '"""'
    else:
        line_cmt = "//"
        open_blk = "/*"
        close_blk = "*/"

    spam_phrases = [
        "Initialize variable", "Check boundary conditions", "Loop start point", 
        "Optimization needed here", "TODO: Refactor later", "Debug print", 
        "Temporary fix", "Algorithm complexity O(n)", "Memory check", 
        "End of execution block", "Variable declaration", "Logic flow control"
    ]

    header_spam = f"{line_cmt} ==========================================\n" \
                  f"{line_cmt}  SUBMISSION ID: {random_string(8)}\n" \
                  f"{line_cmt}  CREATED BY: USER_{random_string(4)}\n" \
                  f"{line_cmt} ==========================================\n"
    new_lines.append(header_spam)

    for line in lines:
        s = line.strip()
        indent = line[:len(line)-len(s)]
        
        is_fragile = False
        
        if '"' in s or '%' in s: is_fragile = True
        
        if s.startswith('#') or s.endswith('\\'): is_fragile = True
        
        if not is_fragile and any(k in s for k in ['for', 'while', 'if', 'else', 'return', 'void', 'int ', 'def ']):
            if random.random() < 0.5: # 50% tỉ lệ
                junk = random_string(8)
                if lang == 'python':
                     new_lines.append(f'{indent}{open_blk} CHECK POINT [{junk}] {close_blk}')
                else:
                     new_lines.append(f'{indent}{open_blk} CRITICAL [{junk}] {close_blk}')

        if s:
            if (not s.endswith('\\')) and (random.random() < 0.6):
                suffix = f" {line_cmt} {random.choice(spam_phrases)} {random_string(3)}"
                new_lines.append(line + suffix)
            else:
                new_lines.append(line)
        else:
            new_lines.append(line)

        if s and random.random() < 0.4: 
            new_lines.append(f"{indent}{line_cmt} NOTE: {random_string(5)} - {random.choice(spam_phrases)}")

    return f"{line_cmt} CHEAT TYPE: SMART Comment Injection\n" + "\n".join(new_lines)

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
    return f"{cmt} CHEAT TYPE: Variable Renaming ({len(mapping)} vars)\n" + "\n".join(new_lines)

def cheat_format(code, lang):
    lines = code.split('\n')
    new_lines = []
    cmt = "#" if lang == 'python' else "//"
    for line in lines:
        s = line.strip()
        if not s: continue
        if lang != 'python':
            new_lines.append((" " * random.randint(0, 4)) + s)
        else:
            new_lines.append(line)
        if random.random() < 0.3: new_lines.append("") # Thêm dòng trống
    return f"{cmt} CHEAT TYPE: Reformatting\n" + "\n".join(new_lines)

def cheat_header(code, lang):
    v = random.randint(100,999)
    name = random_string(3).upper()
    head = ""
    cmt = ""
    if lang == 'cpp': 
        head = f"#define MAX_{name} {v}\n#include <vector>\nusing namespace std;\n"
        cmt = "//"
    elif lang == 'c': 
        head = f"#define LIMIT_{name} {v}\n#include <stdlib.h>\n#include <string.h>\n"
        cmt = "//"
    elif lang == 'python': 
        head = f"import sys\nimport math\nMAX_{name} = {v}\n"
        cmt = "#"
    return f"{cmt} CHEAT TYPE: Header Injection\n" + head + code

def cheat_combo(code, lang):
    c = cheat_rename(code, lang)
    c = cheat_comment(c, lang)
    c = cheat_header(c, lang)
    return c

STRATEGIES = [
    ("comment", cheat_comment), 
    ("rename", cheat_rename), 
    ("format", cheat_format), 
    ("header", cheat_header), 
    ("combo", cheat_combo)
]

def main():
    if not os.path.exists(DATASET_ROOT):
        print(f"Lỗi: Không tìm thấy folder '{DATASET_ROOT}'")
        return
    print(f"Dataset Root: {DATASET_ROOT}")
    print(">>> Bắt đầu tạo dữ liệu giả lập đạo văn (Data Augmentation)...")

    count_created = 0

    problems = os.listdir(DATASET_ROOT)
    for p_folder in problems: # VD: 4A
        p_path = os.path.join(DATASET_ROOT, p_folder)
        if not os.path.isdir(p_path): continue
        
        for l_folder in os.listdir(p_path): # VD: 4A-C
            l_path = os.path.join(p_path, l_folder)
            if not os.path.isdir(l_path): continue
            
            files = [f for f in os.listdir(l_path) 
                     if (f.endswith('.c') or f.endswith('.cpp') or f.endswith('.py')) 
                     and "cheat" not in f]
            
            files.sort()
            
            if not files: continue
            
            
            for i, fname in enumerate(files):
                strat_idx = i % 5 
                strat_name, strat_func = STRATEGIES[strat_idx]
                
                lang = detect_language(fname)
                if lang == 'unknown': continue
                
                try:
                    fpath = os.path.join(l_path, fname)
                    with open(fpath, "r", encoding="utf-8", errors='ignore') as f: 
                        code = f.read()
                    
                    cheat_code = strat_func(code, lang)
                    
                    base, ext = os.path.splitext(fname)
                    new_name = f"{base}_cheat_{strat_name}{ext}"
                    new_path = os.path.join(l_path, new_name)
                    
                    with open(new_path, "w", encoding="utf-8") as f:
                        f.write(cheat_code)
                    
                    print(f"{l_folder}/{new_name}")
                    count_created += 1

                except Exception as e:
                    print(f"  [ERR] {fname}: {e}")

    print(f"\n>>> HOÀN TẤT! Đã tạo thêm {count_created} file cheat.")

if __name__ == "__main__":
    main()