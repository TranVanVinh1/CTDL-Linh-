void hienthi(Cau d){
    Cau c = d->Next;
    while (c != NULL){
        printf ("%c", c->KyTu);
        c= c->Next;
    }
    printf ("\n");
}