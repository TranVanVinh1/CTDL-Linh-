void chuanhoa(Cau *pd){
    int upper =1;
    Cau p = *pd;
    while (p != NULL){
        if (p->KyTu == ' '){
            upper =1;

        }else if (isalpha(p->KyTu)){
            if (upper){
                p->KyTu = toupper(p->KyTu);
                upper =0;
            }else {
                p->KyTu = tolower(p->KyTu);
            }
        }
        p=p->Next;
    }
}