void append(int x, List *pL) {
    Position newNode = (Position)malloc(sizeof(struct Node));
    newNode->Element = x;
    newNode->Next = NULL;

    Position p = *pL; // Duyệt qua danh sách để tìm vị trí cuối cùng
    while (p->Next != NULL) {
        p = p->Next;
    }
    p->Next = newNode; // Nối nút mới vào cuối danh sách
}

void readList(List *pL) {
    int n, x; // Khai báo số lượng phần tử và biến lưu phần tử nhập vào
    scanf("%d", &n); // Nhập số phần tử

    makenullList(pL); // Khởi tạo danh sách rỗng

    for (int i = 0; i < n; i++) {
        scanf("%d", &x); // Nhập phần tử
        append(x, pL); // Nối phần tử vào danh sách
    }
}