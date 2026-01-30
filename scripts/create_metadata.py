import os
import csv
import re

DATASET_ROOT = "dataset"
OUTPUT_FILE = "dataset_metadata.csv"

def create_metadata():
    headers = [
        "file_id", 
        "file_path", 
        "problem_id",
        "language",
        "is_plagiarism",
        "cheat_type",
        "original_source"
    ]
    
    rows = []
    print("Đang quét dữ liệu để tạo Metadata...")

    for root, dirs, files in os.walk(DATASET_ROOT):
        for file in files:
            if file.startswith(".") or file == OUTPUT_FILE: continue

            parts = root.split(os.sep)
            if len(parts) < 3: continue 
            
            problem_id = parts[-2]
            lang_raw = parts[-1]
            
            if "Python" in lang_raw: language = "python"
            elif "C++" in lang_raw: language = "cpp"
            elif "-C" in lang_raw: language = "c"
            else: language = "unknown"

            rel_path = os.path.join(root, file).replace("\\", "/")
            
            if "_cheat_" in file:
                is_plag = 1
                try:
                    cheat_type = file.split("_cheat_")[1].split(".")[0]
                except: cheat_type = "unknown"
                
                original_id = file.split("_cheat_")[0] + "." + file.split(".")[-1]
            else:
                is_plag = 0
                cheat_type = "none"
                original_id = file

            rows.append([file, rel_path, problem_id, language, is_plag, cheat_type, original_id])

    with open(OUTPUT_FILE, "w", newline="", encoding="utf-8") as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        writer.writerows(rows)

    print(f"XONG! Đã tạo '{OUTPUT_FILE}' với {len(rows)} dòng.")
    print("Hãy mở file CSV lên kiểm tra nhé!")

if __name__ == "__main__":
    create_metadata()