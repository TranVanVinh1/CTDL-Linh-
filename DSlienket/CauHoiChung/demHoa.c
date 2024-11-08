int demHoa(Cau d){
    int dd=0;
    Cau p = d;
    while (p != NULL){
        if (isupper(p->KyTu)){
            dd++;

        }
        p = p->Next;

    }
    return dd;
}