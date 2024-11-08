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
