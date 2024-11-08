List getList(){
    List p = (List)malloc(sizeof(struct Node));
    p->Next = NULL;
    return p;
}