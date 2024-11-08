void chenKyTu(char c, Cau *pL){
    Cau n = (Cau)malloc(sizeof(struct Node));
    n->KyTu = c;
    n->Next = NULL;
    Cau t = *pL;
    while (t->Next != NULL){
        t = t->Next;
    }
    t ->Next = n;
}