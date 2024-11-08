int locate1(int x, List L) {
    for (int i = L.Last - 1; i >= 0; i--) {  // Duyệt ngược từ phần tử cuối cùng
        if (L.Elements[i] == x) {  // Nếu tìm thấy phần tử x
            return i + 1;  // Trả về vị trí (lưu ý: vị trí tính từ 1, nên trả về i + 1)
        }
    }
    return L.Last + 1;  // Nếu không tìm thấy x, trả về L.Last + 1
}