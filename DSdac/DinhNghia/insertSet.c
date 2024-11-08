void insertSet(ElementType x, List *pL) {
    // Đưa x vào chỉ số Last của mảng Elements
    pL->Elements[pL->Last] = x;  // Chèn phần tử x vào cuối danh sách

    // Tăng số lượng phần tử trong danh sách
    pL->Last++;  // Cập nhật Last
}