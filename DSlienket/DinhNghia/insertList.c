void insertList(int x, Position p, List *pL) {
    // Tạo nút mới
    Position newNode = (Position)malloc(sizeof(pL));
    newNode->Element = x;     // Gán giá trị cho nút mới
    newNode->Next = p->Next;  // Nối nút mới với nút tiếp theo của p

    p->Next = newNode;        // Nối p với nút mới
}