
void addFirst(int x, List *pL) {
    // Tạo một node mới
    Position newNode = (Position)malloc(sizeof(pL));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return; // Kiểm tra lỗi cấp phát bộ nhớ
    }
    
    newNode->Element = x;    // Gán giá trị cho phần tử mới
    newNode->Next = (*pL)->Next;  // Liên kết phần tử mới với danh sách hiện tại
    
    // Cập nhật đầu danh sách
    (*pL)->Next = newNode;    // Đặt phần tử mới làm đầu danh sách
}