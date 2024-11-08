struct Node*p = L->Next;
    int index =1;
    while (p != NULL){
        float t = (p->Element.R1 + p->Element.R2 + p->Element.R3)/3;
        printf ("%2d - %10s - %50s - %.3f - %.3f - %.3f - %.3f\n",index++,  p->Element.ID, p->Element.Name, p->Element.R1, p->Element.R2, p->Element.R3, t);
        p = p->Next;
    }
    //
    List L = readList(); 
    printList(L);
