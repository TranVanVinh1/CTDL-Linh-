void makenullList(List *pL){
    
    *pL=(Position)malloc(sizeof(struct Node));
    (*pL)->Next = NULL;
}