// Hàm tính tập hợp hợp của 2 tập hợp
List unionSet(List L1, List L2) {
    List result; // Khai báo danh sách kết quả
    makenullList(&result); // Khởi tạo danh sách rỗng cho kết quả

    // Thêm tất cả phần tử từ L1 vào danh sách kết quả
    Position p = L1->Next; // Bắt đầu duyệt từ danh sách L1
    while (p != NULL) { // Duyệt qua tất cả các phần tử trong L1
        append(p->Element, &result); // Thêm phần tử vào danh sách kết quả
        p = p->Next; // Chuyển sang phần tử tiếp theo
    }

    // Duyệt qua danh sách L2 và thêm phần tử không trùng vào danh sách kết quả
    p = L2->Next; // Bắt đầu duyệt từ danh sách L2
    while (p != NULL) { // Duyệt qua tất cả các phần tử trong L2
        // Kiểm tra xem phần tử có trong danh sách kết quả không
        if (!member(p->Element, result)) { // Nếu phần tử chưa có trong kết quả
            append(p->Element, &result); // Thêm phần tử vào danh sách kết quả
        }
        p = p->Next; // Chuyển sang phần tử tiếp theo
    }

    return result; // Trả về danh sách kết quả
}