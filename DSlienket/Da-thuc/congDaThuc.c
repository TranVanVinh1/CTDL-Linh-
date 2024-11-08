DaThuc congDaThuc(DaThuc D1, DaThuc D2){
    DaThuc D = khoitao();
    Position p = D1;
    while (p != NULL){
        chenDonThuc(p->e, &D);
        p = p->Next;
    }
    Position q=D2;
    while (q != NULL){
        chenDonThuc(q->e, &D);
        q = q ->Next;
    }
    return D;
}