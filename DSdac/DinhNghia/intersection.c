void intersection(List L1, List L2, List *pL) {
    makenullList(pL);  // Khởi tạo danh sách kết quả rỗng
    for (int i = 0; i < L1.Last; i++) {  // Duyệt qua từng phần tử của danh sách L1
        if (member(L1.Elements[i], L2)) {  // Nếu phần tử thuộc L2
            insertSet(L1.Elements[i], pL);  // Chèn phần tử đó vào danh sách kết quả pL
        }
    }
}