void chenCuoi(struct SinhVien s,DanhSach *pL) {
    // Kiểm tra xem danh sách còn chỗ để thêm không (tối đa 40 sinh viên)
    if (pL->n < 40) {
        // Thêm sinh viên vào cuối danh sách
        pL->A[pL->n] = s; // Gán sinh viên s vào vị trí n
        pL->n++; // Tăng số lượng sinh viên lên 1
    }
    else printf ("Loi! Danh sach day!");
}