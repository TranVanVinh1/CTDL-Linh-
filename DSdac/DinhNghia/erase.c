void erase(int x, List *pL) {
    int p = locate(x, *pL);  // Tìm vị trí xuất hiện đầu tiên của x trong danh sách
    if (p != pL->Last + 1) {  // Nếu vị trí p là hợp lệ (tức là tìm thấy x)
        deleteList(p, pL);  // Xóa phần tử ở vị trí p
    }
}