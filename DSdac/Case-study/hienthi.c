
void hienthi(DanhSach L) {
    for (int i = 0; i < L.n; i++) {
        // Tính tổng điểm
        float tongDiem = L.A[i].DiemLT + L.A[i].DiemTH1 + L.A[i].DiemTH2;
        
        // Hiển thị thông tin sinh viên và tổng điểm
        printf("%s - %s - %.2f - %.2f - %.2f - %.2f\n",
               L.A[i].MSSV, L.A[i].HoTen, 
               L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2, 
               tongDiem);
    }
}