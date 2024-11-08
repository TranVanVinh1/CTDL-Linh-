void normalize(List *pL) {
    Position p = (*pL)->Next;  // Bắt đầu từ phần tử đầu tiên trong danh sách
    
    // Duyệt qua từng phần tử trong danh sách
    while (p != NULL && p->Next != NULL) {
        Position q = p;
        
        // Duyệt tiếp các phần tử sau phần tử p
        while (q->Next != NULL) {
            // Nếu tìm thấy phần tử trùng với phần tử p
            if (p->Element == q->Next->Element) {
                // Xóa phần tử q->Next
                deleteList(q, pL);
            } else {
                // Nếu không trùng, tiếp tục duyệt phần tử tiếp theo
                q = q->Next;
            }
        }
        
        // Chuyển sang phần tử tiếp theo
        p = p->Next;
    }
}