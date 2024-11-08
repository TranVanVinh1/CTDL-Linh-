List difference(List L1, List L2) {
    List result;  // Danh sách kết quả
    makenullList(&result);  // Khởi tạo danh sách rỗng
    
    Position temp = L1->Next;  // Bỏ qua phần tử đầu tiên của L1
    
    // Duyệt qua tất cả các phần tử của L1
    while (temp != NULL) {
        // Nếu phần tử không có trong L2, thêm vào danh sách kết quả
        if (!member(temp->Element, L2)) {
            append(temp->Element, &result);
        }
        temp = temp->Next;
    }
    
    return result;  // Trả về danh sách kết quả
}