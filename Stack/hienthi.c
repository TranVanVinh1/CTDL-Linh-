void hienthi(NganXep *pS){
    while (!ktRong(*pS)){
        giatriDinh(*pS);
        printf ("%d ", giatriDinh(*pS));
        xoa(pS);       
    }
}