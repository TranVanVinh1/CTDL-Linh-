DanhSach nhap() {
    DanhSach listSV;
    listSV.n = 0;
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        struct SinhVien sv;
        int check = 0;
        scanf("%s",  sv.MSSV);
        scanf(" %[^\n]s", sv.HoTen);
        scanf("%f %f %f", &sv.DiemLT, &sv.DiemTH1, &sv.DiemTH2);
            for(int j = 0; j < listSV.n; j++) {
                if(strcmp(listSV.A[j].MSSV, sv.MSSV) == 0){
                    check = 1;
                    break;
                }
            }
            
        if(check == 0) {
            listSV.A[listSV.n] = sv;
            listSV.n++;
        }
        
    }
    return listSV;
}