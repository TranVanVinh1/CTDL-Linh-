void enQueue(ElementType x, Queue *Q) {
    // Kiểm tra hàng đầy
    if ((Q->Rear + 1) % MaxLength == Q->Front) {
        printf("Hang day.\n");
    } else {
        // Nếu hàng đợi ban đầu rỗng, khởi tạo Front
        if (Q->Front == -1) {
            Q->Front = 0;
        }
        else if (Q->Rear == MaxLength - 1) { // Nếu Rear ở cuối mảng
            // Dịch chuyển tất cả các phần tử về phía đầu hàng
            for (int i = Q->Front; i <= Q->Rear; i++) {
                Q->Elements[i - Q->Front] = Q->Elements[i];
            }
            Q->Rear -= Q->Front; // Cập nhật Rear
            Q->Front = 0; // Đặt lại Front về 0
        }
        // Tăng Rear
        Q->Rear = (Q->Rear + 1) % MaxLength;
        // Thêm phần tử vào vị trí Rear mới
        Q->Elements[Q->Rear] = x;
    }
}
// ======================================================

void deQueue(Queue *Q) {
    if (Q->Front == -1) {
        printf("Loi: Hang rong!\n");
    } else {
        // Nếu hàng đợi không rỗng, xóa phần tử đầu
        Q->Front++;
        // Nếu Front vượt quá Rear, tức là hàng đợi đã rỗng
        if (Q->Front > Q->Rear) {
            Q->Front = Q->Rear = -1;
        }
    }
}
