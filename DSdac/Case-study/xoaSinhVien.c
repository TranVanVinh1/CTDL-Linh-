void xoaSinhVien(char x[], DanhSach *pL) {
    DanhSach L = *pL; // Sao chép nội dung của pL sang L
    int p = tim(x, L); // Tìm vị trí của sinh viên có mã số x trong danh sách

    // Kiểm tra vị trí hợp lệ
    if (p >= 0) {
        xoaTai(p, pL); // Gọi hàm xóa sinh viên ở vị trí p
    }
}   