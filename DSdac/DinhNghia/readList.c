void readList(List *pL) {
    makenullList(pL);  // Khởi tạo danh sách rỗng
    int n, x;
    scanf("%d", &n);  // Nhập số lượng phần tử của danh sách
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);  // Nhập giá trị phần tử
        insertList(x, pL->Last + 1, pL);  // Chèn phần tử x vào vị trí cuối cùng
    }
}