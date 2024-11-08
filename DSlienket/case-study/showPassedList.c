struct Node*p = L;
    int index =1;
    int d =0;
    while (p !=NULL){
        float t = (p->Element.R1 +p->Element.R2 + p->Element.R3)/3;
        if (t >= 4.0){
            printf ("%2d - %10s - %50s - %.3f - %.3f - %.3f - %.3f\n", index++, p->Element.ID,p->Element.Name,p->Element.R1,p->Element.R2,p->Element.R3,t);
            d++;
        }
p = p->Next;
    }
    printf ("%d students in total", d);

    // 
    List L = readList();
    printList(L);
    showPassedList(L);