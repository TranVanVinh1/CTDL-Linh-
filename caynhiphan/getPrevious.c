Tree getPrevious(int x, Tree T) {
    Tree t = NULL;  // Biến t dùng để giữ node trước node có giá trị x
    while (T != NULL) {
        if (x > T->Key) {
            t = T;  // Cập nhật node trước vì giá trị x lớn hơn node hiện tại
            T = T->Right;  // Đi sang cây con phải
        } else {
            T = T->Left;  // Đi sang cây con trái nếu x <= T->Key
        }
    }
    return t;
}