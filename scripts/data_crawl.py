from DrissionPage import ChromiumPage, ChromiumOptions
import time
import os
import random
import glob

SUBMISSIONS_PER_LANG = 5  
PROBLEMS_TO_CRAWL = 10    

PROBLEM_LIST = [
    ('4', 'A'), ('71', 'A'), ('158', 'A'), ('1', 'A'), ('231', 'A'),
    ('282', 'A'), ('50', 'A'), ('112', 'A'), ('263', 'A'), ('281', 'A')
]

LANG_CONFIG = {
    'c':   {'id': '43', 'name': 'GNU C11'},       
    'cpp': {'id': '73', 'name': 'C++20 (64)'},   
    'py':  {'id': '87', 'name': 'PyPy 3-64'}      
}

def check_progress(folder_path):
    if not os.path.exists(folder_path):
        return {'cpp': 0, 'py': 0, 'c': 0}
    cpp_count = len(glob.glob(os.path.join(folder_path, "*.cpp")))
    py_count = len(glob.glob(os.path.join(folder_path, "*.py")))
    c_files = glob.glob(os.path.join(folder_path, "*.c"))
    c_count = len([f for f in c_files if not f.endswith(".cpp")])
    return {'cpp': cpp_count, 'py': py_count, 'c': c_count}

def is_valid_language_relaxed(text, target_lang_key):
    """
    Hàm kiểm tra DỄ TÍNH hơn.
    Vì đã lọc bằng ID trên URL, ta chỉ cần loại trừ các trường hợp sai hẳn.
    """
    text = text.lower().strip()
    
    if target_lang_key == 'c':
        if any(x in text for x in ['++', 'script', 'java', 'py', 'sharp', 'clang++']):
            return False
        return True 
        
    elif target_lang_key == 'cpp':
        return 'c++' in text or 'g++' in text
    elif target_lang_key == 'py':
        return 'python' in text or 'pypy' in text
    return False

def wait_for_table_or_captcha(page):
    while True:
        if page.ele('css:table.status-frame-datatable'):
            return True 
        title = page.title.lower()
        if "attention" in title or "moment" in title or "security" in title:
            print("   [!!!] CLOUDFLARE CHẶN! GIẢI CAPTCHA ĐI BẠN ƠI...", end='\r')
        else:
            print("   [...] Đang đợi bảng danh sách...", end='\r')
        time.sleep(1)

def wait_for_code_or_captcha(page):
    while True:
        if page.ele('#program-source-text'):
            return True
        title = page.title.lower()
        if "attention" in title or "moment" in title or "security" in title:
            print("   [!!!] CLOUDFLARE CHẶN! GIẢI CAPTCHA ĐI BẠN ƠI...", end='\r')
        else:
            print("   [...] Đang đợi code hiện ra...", end='\r')
        time.sleep(1)

def get_submissions_debug(page, contest_id, problem_index, lang_key, count_needed, save_folder):
    found_ids = []
    base_url = f"https://codeforces.com/contest/{contest_id}/status?problem={problem_index}&verdict=OK&programTypeId={LANG_CONFIG[lang_key]['id']}"
    
    print(f"   -> [Start] Đang tìm {count_needed} bài {LANG_CONFIG[lang_key]['name']} MỚI...")
    page.get(base_url)
    
    current_page_num = 1
    
    while len(found_ids) < count_needed:
        wait_for_table_or_captcha(page)
        
        if current_page_num % 5 == 0 or current_page_num == 1:
            print(f"      ...Đang quét trang {current_page_num}...")
            
        rows = page.eles('css:table.status-frame-datatable tr')
        
        for row in rows:
            if not row.ele('tag:td'): continue
            try:
                s_id = row.ele('css:td:nth-child(1)').text.strip()
                lang_text = row.ele('css:td:nth-child(5)').text.strip()
                
                if 'Accepted' not in row.ele('css:td:nth-child(6)').text: continue
                
                is_valid = is_valid_language_relaxed(lang_text, lang_key)
                if not is_valid:
                    continue

                file_check = os.path.join(save_folder, f"{s_id}.{lang_key}")
                if os.path.exists(file_check): 
                    continue 

                if s_id not in [x[0] for x in found_ids]:
                    ext = f".{lang_key}"
                    found_ids.append((s_id, ext))
                    print(f"      + [CHỌN] Tìm thấy bài MỚI: {s_id} ({lang_text})")
                    
                if len(found_ids) >= count_needed: break
            except: continue
            
        if len(found_ids) >= count_needed: break
        
        try:
            pagination_links = page.eles('css:.pagination ul li a')
            next_btn = None
            for link in pagination_links:
                if "→" in link.text:
                    next_btn = link
                    break
            
            if next_btn:
                page.scroll.to_bottom()
                time.sleep(20)
                next_btn.click()
                current_page_num += 1
                time.sleep(random.uniform(2, 3))
            else:
                print("      [Info] Đã hết trang.")
                break
        except Exception as e:
            print(f"      [Lỗi Next Page] {e}")
            break
        
    return found_ids

def run_scraper():
    print("Đang kết nối Chrome (Cổng 9111)...")
    co = ChromiumOptions().set_local_port(9111).auto_port()
    try:
        page = ChromiumPage(co)
    except:
        print("Lỗi: Không tìm thấy Chrome.")
        return

    if "enter" in page.url or "codeforces.com" not in page.url:
        page.get("https://codeforces.com/enter")
        input("\n>>> HÃY ĐĂNG NHẬP RỒI BẤM ENTER TẠI ĐÂY...")
    
    for contest_id, problem_index in PROBLEM_LIST:
        problem_name = f"{contest_id}{problem_index}"
        save_folder = os.path.join("dataset", problem_name)
        os.makedirs(save_folder, exist_ok=True)
        
        current_counts = check_progress(save_folder)
        needed = {
            'cpp': max(0, SUBMISSIONS_PER_LANG - current_counts['cpp']),
            'py': max(0, SUBMISSIONS_PER_LANG - current_counts['py']),
            'c': max(0, SUBMISSIONS_PER_LANG - current_counts['c'])
        }
        
        if sum(needed.values()) == 0:
            print(f"-> [SKIP] {problem_name} đã đủ bài.")
            continue

        print(f"\n--- Xử lý bài {problem_name} ---")
        
        all_targets = []
        for lang_key, count in needed.items():
            if count > 0:
                targets = get_submissions_debug(page, contest_id, problem_index, lang_key, count, save_folder)
                all_targets.extend(targets)

        if not all_targets:
            print(f"   ! Không tìm thêm được bài nào MỚI.")
            continue

        print(f"\n-> Bắt đầu tải {len(all_targets)} code MỚI...")
        
        for s_id, extension in all_targets:
            filename = os.path.join(save_folder, f"{s_id}{extension}")
            if os.path.exists(filename): continue

            url = f"https://codeforces.com/contest/{contest_id}/submission/{s_id}"
            try:
                page.get(url)
                
                wait_for_code_or_captcha(page)
                
                code_element = page.ele('#program-source-text')
                if code_element and len(code_element.text) > 5:
                    with open(filename, "w", encoding="utf-8") as f:
                        f.write(code_element.text)
                    print(f"   [OK] Đã lưu {s_id}{extension}")
                else:
                    print(f"   [!] Code rỗng {s_id}")
                
                time.sleep(random.uniform(4, 7)) 

            except Exception as e:
                print(f"   Err {s_id}: {e}")

        print(f"--- Hoàn tất {problem_name} ---")

if __name__ == "__main__":
    run_scraper()