import os

# Thư mục gốc chứa dữ liệu
DATASET_ROOT = "dataset"

def clean_cheats():
    if not os.path.exists(DATASET_ROOT):
        print(f"Không tìm thấy thư mục '{DATASET_ROOT}'!")
        return

    print(f"Bắt đầu quét dọn thư mục '{DATASET_ROOT}'...")
    deleted_count = 0
    
    # Duyệt đệ quy qua tất cả các thư mục con (bất kể độ sâu)
    for root, dirs, files in os.walk(DATASET_ROOT):
        for file in files:
            # Điều kiện nhận diện file rác: có chữ "cheat" trong tên
            if "_cheat_" in file:
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    print(f"-> Đã xóa: {file}")
                    deleted_count += 1
                except Exception as e:
                    print(f"Lỗi khi xóa {file}: {e}")

    if deleted_count == 0:
        print("\nThư mục sạch bóng! Không tìm thấy file cheat nào.")
    else:
        print(f"\n--- HOÀN TẤT: Đã xóa tổng cộng {deleted_count} file cheat. ---")
        print("Dataset của bạn giờ chỉ còn lại các file gốc (original).")

if __name__ == "__main__":
    clean_cheats()