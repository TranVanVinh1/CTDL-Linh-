
void deleteList(int p, List *pL) {
    // Kiểm tra nếu vị trí xóa không hợp lệ
    if (p < 0 || p >= pL->Last) {
        printf ("Vi tri khong hop le\n");
        return; // Không làm gì nếu vị trí không hợp lệ
    }

    // Dịch các phần tử từ vị trí p + 1 sang trái một vị trí
    for (int i = p-1; i < pL->Last; i++) {
        pL->Elements[i] = pL->Elements[i + 1];
    }

    // Giảm số lượng phần tử của danh sách sau khi xóa
    pL->Last--;
}
