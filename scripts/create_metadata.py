import os
import csv
import re

DATASET_ROOT = "dataset"
OUTPUT_FILE = "dataset_metadata.csv"

def create_metadata():
    # Header của file CSV
    headers = [
        "file_id",          # Tên file (duy nhất)
        "file_path",        # Đường dẫn tương đối
        "problem_id",       # Bài toán (1A, 4A...)
        "language",         # Ngôn ngữ (C, C++, Python)
        "is_plagiarism",    # 0: Gốc, 1: Cheat
        "cheat_type",       # none, rename, comment, format...
        "original_source"   # Nếu là cheat thì cheat từ file gốc nào?
    ]
    
    rows = []
    print("Đang quét dữ liệu để tạo Metadata...")

    for root, dirs, files in os.walk(DATASET_ROOT):
        for file in files:
            if file.startswith(".") or file == OUTPUT_FILE: continue
            
            # Phân tích đường dẫn: dataset / 1A / 1A-C / tên_file
            parts = root.split(os.sep)
            if len(parts) < 3: continue 
            
            problem_id = parts[-2]  # VD: 1A
            lang_raw = parts[-1]    # VD: 1A-C
            
            # Chuẩn hóa ngôn ngữ
            if "Python" in lang_raw: language = "python"
            elif "C++" in lang_raw: language = "cpp"
            elif "-C" in lang_raw: language = "c"
            else: language = "unknown"

            rel_path = os.path.join(root, file).replace("\\", "/")
            
            # Logic xác định Cheat hay Original
            if "_cheat_" in file:
                is_plag = 1
                # Tên file: 360446_cheat_rename.c
                # Tách cheat_type: rename
                try:
                    cheat_type = file.split("_cheat_")[1].split(".")[0]
                except: cheat_type = "unknown"
                
                # Xác định file gốc: 360446.c
                original_id = file.split("_cheat_")[0] + "." + file.split(".")[-1]
            else:
                is_plag = 0
                cheat_type = "none"
                original_id = file # Chính là nó

            rows.append([file, rel_path, problem_id, language, is_plag, cheat_type, original_id])

    # Ghi ra CSV
    with open(OUTPUT_FILE, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        writer.writerows(rows)

    print(f"XONG! Đã tạo '{OUTPUT_FILE}' với {len(rows)} dòng.")
    print("Hãy mở file CSV lên kiểm tra nhé!")

if __name__ == "__main__":
    create_metadata()