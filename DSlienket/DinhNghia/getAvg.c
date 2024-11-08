float getAvg(List L) {
    Position temp = L->Next;  // Bỏ qua phần tử đầu tiên (giả sử là đầu danh sách trống)
    int sum = 0, count = 0;  // Tổng và số phần tử
    
    // Duyệt qua toàn bộ danh sách
    while (temp != NULL) {
        sum += temp->Element;  // Cộng giá trị phần tử vào tổng
        count++;               // Tăng số lượng phần tử
        temp = temp->Next;     // Chuyển sang phần tử tiếp theo
    }
    
    // Nếu danh sách không có phần tử nào
    if (count == 0) {
        return -10000.0f;
    }
    
    // Tính và trả về trung bình cộng
    return (float)sum / count;
}