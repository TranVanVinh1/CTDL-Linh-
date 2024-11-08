DanhSach chepKhongDat(DanhSach L) {
    // Tạo danh sách kết quả rỗng
    DanhSach ketQua = dsRong();

    // Duyệt qua danh sách L
    for (int i = 0; i < L.n; i++) {
        // Tính tổng điểm của sinh viên
        float tongDiem = L.A[i].DiemLT + L.A[i].DiemTH1 + L.A[i].DiemTH2;

        // Nếu tổng điểm < 4 thì chèn sinh viên đó vào danh sách kết quả
        if (tongDiem < 4.0) {
            chenCuoi(L.A[i], &ketQua);
        }
    }

    // Trả về danh sách kết quả
    return ketQua;
}