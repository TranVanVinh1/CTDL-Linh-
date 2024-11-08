DaThuc tinhDaoHam(DaThuc D) {
    // Khởi tạo một đa thức kết quả rỗng
    DaThuc daoHam = khoitao();
    
    // Duyệt qua các đơn thức của đa thức D
    Position p = D;
    while (p != NULL) {
        DonThuc e = p->e;
        
        // Nếu bậc lớn hơn 0, tính đạo hàm của đơn thức
        if (e.bac > 0) {
            DonThuc daoHamDonThuc;
            daoHamDonThuc.he_so = e.he_so * e.bac; // Hệ số mới là hệ số cũ nhân với bậc
            daoHamDonThuc.bac = e.bac - 1;         // Bậc mới là bậc cũ trừ đi 1

            // Thêm đơn thức đạo hàm vào đa thức kết quả
            chenDonThuc(daoHamDonThuc, &daoHam);
        }
        
        // Chuyển sang đơn thức tiếp theo
        p = p->Next;
    }

    return daoHam;
}