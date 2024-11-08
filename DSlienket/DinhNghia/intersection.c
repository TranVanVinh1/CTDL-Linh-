List intersection(List L1, List L2) {
    List result; // Khai báo danh sách kết quả
    makenullList(&result); // Khởi tạo danh sách rỗng cho kết quả

    Position p = L1->Next; // Bắt đầu duyệt từ danh sách L1
    while (p != NULL) { // Duyệt qua tất cả các phần tử trong L1
        if (member(p->Element, L2)) { // Kiểm tra nếu phần tử có trong L2
            append(p->Element, &result); // Nếu có, thêm vào danh sách kết quả
        }
        p = p->Next; // Chuyển sang phần tử tiếp theo
    }
    
    return result; // Trả về danh sách kết quả
}