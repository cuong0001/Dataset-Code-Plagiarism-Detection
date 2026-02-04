import os
import csv

DATASET_ROOT = "dataset"
OUTPUT_FILE = "dataset_metadata.csv"

def create_metadata():
    headers = [
        "file_path", 
        "file_name",   
        "problem",   
        "language",      
        "is_plagiarism",  
        "cheat_type",   
        "original_source"  
    ]
    
    rows = []
    print(f"--- Đang quét folder '{DATASET_ROOT}' để tạo Metadata ---")

    count = 0
    for root, dirs, files in os.walk(DATASET_ROOT):
        for file in files:
            if file.startswith(".") or file == OUTPUT_FILE: continue
            
            root_normalized = root.replace("\\", "/")
            parts = root_normalized.split("/")

            if len(parts) < 3: continue 
            
            problem_id = parts[-2]
            folder_lang = parts[-1] 

            if "Python" in folder_lang: language = "python"
            elif "C++" in folder_lang: language = "cpp"
            elif folder_lang.endswith("-C"): language = "c" 
            else: continue 

            rel_path = f"{root_normalized}/{file}"
            
            if "_cheat_" in file:
                is_plag = 1
                try:
                    cheat_type = file.split("_cheat_")[1].split(".")[0]
                except: 
                    cheat_type = "unknown"
                
                base_id = file.split("_cheat_")[0]   
                ext = file.split(".")[-1]              
                original_source = f"{base_id}.{ext}"
            else:
                is_plag = 0
                cheat_type = "none"
                original_source = file

            rows.append([rel_path, file, problem_id, language, is_plag, cheat_type, original_source])
            count += 1

    rows.sort(key=lambda x: (x[2], x[3], x[6]))

    with open(OUTPUT_FILE, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        writer.writerows(rows)

    print(f"\n[OK] Đã xuất file '{OUTPUT_FILE}' thành công.")
    print(f"Tổng cộng: {count} files.")
    print(f"Đường dẫn: {os.path.abspath(OUTPUT_FILE)}")

if __name__ == "__main__":
    create_metadata()