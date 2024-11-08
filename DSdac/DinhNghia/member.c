int member(int  x, List L) {
    for (int i = 0; i < L.Last; i++) {  // Duyệt qua từng phần tử trong danh sách
        if (L.Elements[i] == x) {  // Kiểm tra nếu phần tử hiện tại bằng x
            return 1;  // Nếu có, trả về 1
        }
    }
    return 0;  // Nếu không có, trả về 0
}