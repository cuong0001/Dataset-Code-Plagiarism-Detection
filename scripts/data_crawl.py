import requests
from DrissionPage import ChromiumPage, ChromiumOptions
import time
import os
import glob
import random

SUBMISSIONS_PER_LANG = 5   
PROBLEM_LIST = [
    ('4', 'A'), ('1', 'A'), ('50', 'A'), ('71', 'A'), ('112', 'A'),
    ('158', 'A'), ('231', 'A'), ('263', 'A'), ('281', 'A'), ('282', 'A')
]

LANG_MAP = {
    'c':   {'matches': ['GNU C11', 'GNU C23', 'Clang'], 'exclude': ['++', 'sharp'], 'ext': '.c'},
    'cpp': {'matches': ['C++', 'G++', 'Clang++'],      'exclude': [],               'ext': '.cpp'},
    'py':  {'matches': ['Python', 'PyPy'],             'exclude': [],               'ext': '.py'}
}

FOLDER_SUFFIX_MAP = {
    'c': '-C',
    'cpp': '-C++',
    'py': '-Python'
}

def check_progress(base_folder, problem_name):
    """
    Kiểm tra tiến độ trong các SUBFOLDER riêng biệt.
    Ví dụ: dataset/4A/4A-C/
    """
    if not os.path.exists(base_folder):
        return {'cpp': 0, 'py': 0, 'c': 0}
    
    counts = {}
    for lang_key in ['c', 'cpp', 'py']:
        sub_folder_name = f"{problem_name}{FOLDER_SUFFIX_MAP[lang_key]}"
        sub_folder_path = os.path.join(base_folder, sub_folder_name)
        
        if os.path.exists(sub_folder_path):
            ext = LANG_MAP[lang_key]['ext']
            counts[lang_key] = len(glob.glob(os.path.join(sub_folder_path, f"*{ext}")))
        else:
            counts[lang_key] = 0
            
    return counts

def is_target_language(api_lang_str, target_lang_key):
    api_lang_str = api_lang_str.lower()
    config = LANG_MAP[target_lang_key]
    
    for exc in config['exclude']:
        if exc.lower() in api_lang_str: return False
        
    for m in config['matches']:
        if m.lower() in api_lang_str: return True
        
    return False

def get_submission_ids_from_api_deep_scan(contest_id, problem_index, needed_counts):
    found_submissions = {'c': [], 'cpp': [], 'py': []}
    
    BATCH_SIZE = 2000      
    MAX_SEARCH_DEPTH = 200000
    current_from = 1       
    
    while current_from < MAX_SEARCH_DEPTH:
        is_full = True
        for lang in ['c', 'cpp', 'py']:
            if len(found_submissions[lang]) < needed_counts[lang]:
                is_full = False
                break
        if is_full:
            print(f"   [API] Đã tìm ĐỦ số lượng cần thiết. Dừng quét.")
            break

        url = f"https://codeforces.com/api/contest.status?contestId={contest_id}&from={current_from}&count={BATCH_SIZE}"
        print(f"   [API] Đang quét batch từ {current_from} đến {current_from + BATCH_SIZE}...")
        
        try:
            resp = requests.get(url, timeout=15).json()
            if resp['status'] != 'OK':
                print(f"   [API Error] {resp.get('comment')}")
                if 'limit exceeded' in str(resp.get('comment')).lower():
                    print("   -> Đợi 5s...")
                    time.sleep(5)
                    continue
                else:
                    break 
            
            submissions = resp['result']
            if not submissions:
                print("   [API] Hết dữ liệu bài nộp.")
                break 
            
            for sub in submissions:
                if sub.get('verdict') != 'OK': continue
                if sub['problem']['index'] != problem_index: continue
                
                lang_str = sub.get('programmingLanguage', '')
                s_id = sub['id']
                
                for lang_key in ['c', 'cpp', 'py']:
                    if len(found_submissions[lang_key]) < needed_counts[lang_key]:
                        if is_target_language(lang_str, lang_key):
                            if s_id not in found_submissions[lang_key]:
                                found_submissions[lang_key].append(s_id)
            
            print(f"   -> Tiến độ Session này: C: {len(found_submissions['c'])}/{needed_counts['c']}, Py: {len(found_submissions['py'])}, C++: {len(found_submissions['cpp'])}")
            
            current_from += BATCH_SIZE
            time.sleep(5) 
            
        except Exception as e:
            print(f"   [API Error] {e}")
            time.sleep(5)
            
    return found_submissions

def download_code_direct(page, contest_id, submission_id, save_path):
    url = f"https://codeforces.com/contest/{contest_id}/submission/{submission_id}"
    try:
        page.get(url)
        start_wait = time.time()
        while time.time() - start_wait < 10:
            if "attention" in page.title.lower() or "security" in page.title.lower():
                print("      [!] Cloudflare check...", end='\r')
                time.sleep(2)
                continue

            if page.ele('#program-source-text'):
                code_text = page.ele('#program-source-text').text
                if len(code_text) < 5: return False
                with open(save_path, "w", encoding="utf-8") as f:
                    f.write(code_text)
                return True
            time.sleep(0.5)
    except Exception as e:
        print(f"      Err: {e}")
    return False

def run_downloader():
    print("Đang kết nối Chrome (Cổng 9111)...")
    co = ChromiumOptions().set_local_port(9111).auto_port()
    try:
        page = ChromiumPage(co)
    except:
        print("Lỗi: Không tìm thấy Chrome.")
        return

    print("\n" + "="*50)
    print(">>> ĐANG MỞ TRANG ĐĂNG NHẬP...")
    print(">>> VUI LÒNG ĐĂNG NHẬP TRÊN TRÌNH DUYỆT RỒI BẤM ENTER TẠI ĐÂY.")
    print("="*50 + "\n")
    
    page.get("https://codeforces.com/enter")
    input(">>> (Bấm Enter khi đã sẵn sàng...)")

    for contest_id, problem_index in PROBLEM_LIST:
        problem_name = f"{contest_id}{problem_index}"
        
        base_folder = os.path.join("dataset", problem_name)
        os.makedirs(base_folder, exist_ok=True)
        
        curr = check_progress(base_folder, problem_name)
        needed = {
            'c': max(0, SUBMISSIONS_PER_LANG - curr['c']),
            'cpp': max(0, SUBMISSIONS_PER_LANG - curr['cpp']),
            'py': max(0, SUBMISSIONS_PER_LANG - curr['py'])
        }
        
        if sum(needed.values()) == 0:
            print(f"\n[SKIP] {problem_name} đã đủ bài.")
            continue
            
        print(f"\n--- Đang Deep Scan bài {problem_name} (Thiếu: C:{needed['c']}...) ---")
        
        target_ids = get_submission_ids_from_api_deep_scan(contest_id, problem_index, needed)
        
        total_found = sum(len(x) for x in target_ids.values())
        if total_found == 0:
            print("   ! Không tìm thấy bài nào dù đã quét sâu.")
            continue
            
        print(f"   -> Tổng tìm được {total_found} bài. Bắt đầu tải...")
        
        for lang, ids in target_ids.items():
            sub_folder_name = f"{problem_name}{FOLDER_SUFFIX_MAP[lang]}"
            final_save_dir = os.path.join(base_folder, sub_folder_name)
            os.makedirs(final_save_dir, exist_ok=True)

            for s_id in ids:
                ext = LANG_MAP[lang]['ext']
                filename = os.path.join(final_save_dir, f"{s_id}{ext}")
                
                if os.path.exists(filename): continue
                
                print(f"      Downloading {s_id} ({lang}) vào {sub_folder_name}...", end="")
                success = download_code_direct(page, contest_id, s_id, filename)
                
                if success:
                    print(" [OK]")
                    time.sleep(random.uniform(6, 8))
                else:
                    print(" [Fail]")

if __name__ == "__main__":
    run_downloader()