void unionSet(List L1, List L2, List *pL) {
    makenullList(pL);  // Khởi tạo danh sách kết quả là rỗng

    // Đưa toàn bộ danh sách L1 vào danh sách kết quả
    for (int i = 0; i < L1.Last; i++) {
        insertSet(L1.Elements[i], pL);  // Thêm phần tử vào danh sách kết quả
    }

    // Duyệt qua danh sách L2
    for (int j = 0; j < L2.Last; j++) {
        // Kiểm tra xem phần tử đã có trong danh sách kết quả chưa
        if (!member(L2.Elements[j], *pL)) {
            insertSet(L2.Elements[j], pL);  // Thêm phần tử nếu chưa có
        }
    }
}
