void sort(List *pL) {
    Position A =*pL;
    while (A->Next !=NULL){
        Position B = A->Next;
        while (B->Next != NULL){
            if (A->Next->Element > B->Next->Element){
                ElementType temp = A->Next->Element; 
                A->Next->Element=B->Next->Element;
                B->Next->Element = temp;
            }
            B= B->Next;
        }
        A = A->Next;
    }
}