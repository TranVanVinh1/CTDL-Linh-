DaThuc nhapDaThuc() {
    DaThuc D = khoitao();  // Khởi tạo đa thức rỗng
    int n;                 // Số lượng đơn thức
    scanf("%d", &n);        // Nhập số lượng đơn thức

    for (int i = 0; i < n; i++) {
        DonThuc e;          // Khai báo đơn thức e
        scanf("%lf %d", &e.he_so, &e.bac);  // Nhập hệ số và bậc của đơn thức
        chenDonThuc(e, &D); // Chèn đơn thức vào đa thức D
    }

    return D;  // Trả về đa thức đã nhập
}