struct Node*	locate(char ID[], List L){
    struct Node*p = L->Next;
    int f=0;
    while (p->Next != NULL && !f){
        if (strcmp(ID, p->Next->Element.ID) == 0){
            f =1;
        }
        else p = p->Next;
    }
    return p;
}