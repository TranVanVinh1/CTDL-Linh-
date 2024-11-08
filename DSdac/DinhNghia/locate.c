int locate(int x, List L) {
    for (int i = 0; i < L.Last; i++) {  // Duyệt qua các phần tử trong danh sách
        if (L.Elements[i] == x) {  // Nếu tìm thấy phần tử x
            return i + 1;  // Trả về vị trí (lưu ý: vị trí tính từ 1, nên trả về i + 1)
        }
    }
    return L.Last +1;  // Nếu không tìm thấy x, trả về L.Last + 1
}