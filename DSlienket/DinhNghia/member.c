int member(int x, List L) {
    Position p = L->Next;    // Bắt đầu từ đầu danh sách
    while (p != NULL) {
        if (p->Element == x) {
            return 1; // Trả về 1 nếu x có trong danh sách
        }
        p = p->Next; // Chuyển sang phần tử tiếp theo
    }
    return 0; // Trả về 0 nếu x không có trong danh sách
}