int tim(char x[10], DanhSach L) {
    for (int i = 0; i < L.n; i++) {
        if (strcmp(L.A[i].MSSV, x) == 0) {
            return i+1;  // Trả về vị trí sinh viên đầu tiên có mã số x
        }
    }
    return L.n + 1; // Nếu không tìm thấy
}