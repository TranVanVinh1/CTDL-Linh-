void normalize(List *pL) {
    Position P = 1;  // Bắt đầu từ vị trí đầu tiên
    while (P != pL->Last + 1) {  // Duyệt qua tất cả các phần tử
        Position Q = P + 1;  // Khởi tạo Q ở vị trí tiếp theo
        while (Q != pL->Last + 1) {  // Duyệt các phần tử tiếp theo
            // So sánh phần tử tại vị trí P và Q
            if (pL->Elements[P - 1] == pL->Elements[Q - 1]) {
                deleteList(Q, pL);  // Xóa phần tử tại vị trí Q nếu chúng bằng nhau
            } else {
                Q++;  // Chỉ số Q tăng lên
            }
        }
        P++;  // Chỉ số P tăng lên
    }
}