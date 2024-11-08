float getAvg(List L) {
    // Kiểm tra nếu danh sách không có phần tử nào
    if (L.Last == 0) {
        return -10000.0000;  // Trả về -10000.0000 nếu danh sách rỗng
    }
    
    float S = 0;  // Khởi tạo tổng S
    for (int i = 0; i < L.Last; i++) {
        S += L.Elements[i];  // Cộng dồn giá trị các phần tử vào S
    }
    
    // Tính trung bình cộng
    return S / L.Last;  // Trả về trung bình cộng
}