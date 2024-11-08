DaThuc nhanDaThuc(DaThuc D1, DaThuc D2) {
    DaThuc D = khoitao();
    Position p, q, r;
    DonThuc t;

    for (p = D1; p != NULL; p = p->Next) {
        for (q = D2; q != NULL; q = q->Next) {
            t.he_so = p->e.he_so * q->e.he_so;
            t.bac = p->e.bac + q->e.bac;

            // Bỏ qua đơn thức có hệ số bằng 0
            if (t.he_so == 0) {
                continue;
            }
            // Tìm vị trí chèn đơn thức t vào đa thức D
            r = D;
            while (r != NULL && r->e.bac > t.bac) {
                r = r->Next;
            }

            if (r == NULL || r->e.bac < t.bac) { // Chèn vào đầu hoặc giữa
                chenDonThuc(t, &r);
            } else { // Cộng hệ số với đơn thức có cùng bậc
                r->e.he_so += t.he_so;
            }
        }
    }

    return D;
}