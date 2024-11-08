void copyEvenNumbers(List L1, List *pL2) {
    makenullList(pL2);  // Khởi tạo danh sách rỗng cho pL2
    for (int i = 0; i < L1.Last; i++) {  // Giả sử danh sách L1 có thuộc tính size để biết số phần tử
        if (L1.Elements[i] % 2 == 0) {  // Kiểm tra nếu phần tử là số chẵn
            insertList(L1.Elements[i], pL2->Last+1, pL2);  // Chèn phần tử vào pL2
        }
    }
}