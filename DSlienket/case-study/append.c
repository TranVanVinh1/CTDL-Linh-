int append(Student s, List* pL){
    if (locate(s.ID, *pL) != NULL){
        return 0;
    }
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
     newNode->Element = s;
     newNode->Next = NULL;
     struct Node* current = *pL;
     while (current->Next != NULL){
        current = current->Next;
     }
     current->Next = newNode;
     return 1;
}