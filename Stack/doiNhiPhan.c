void doiNhiPhan(int n, NganXep *pS){
    khoitao(pS);
    if(n==0){
        them(0, pS);
        return ;
    }

    while(n > 0){
        int phandu = n % 2;
        them(phandu, pS);
        n/=2;
    }
}