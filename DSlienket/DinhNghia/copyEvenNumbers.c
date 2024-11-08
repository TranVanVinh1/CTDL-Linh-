void copyEvenNumbers(List L1, List *pL2) {
    makenullList(pL2);  // Khởi tạo danh sách rỗng cho L2

    Position temp = L1->Next;  // Bỏ qua phần tử đầu tiên (giả sử là đầu danh sách trống)
    
    // Duyệt qua từng phần tử trong danh sách L1
    while (temp != NULL) {
        if (temp->Element % 2 == 0) {  // Kiểm tra nếu phần tử là số chẵn
            append(temp->Element, pL2);  // Thêm phần tử chẵn vào L2
        }
        temp = temp->Next;  // Di chuyển đến phần tử tiếp theo
    }
}