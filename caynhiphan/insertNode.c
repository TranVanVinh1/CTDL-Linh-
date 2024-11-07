void insertNode(int x, Tree *pT) {
    if ((*pT) == NULL) {
        (*pT) = (Tree)malloc(sizeof(struct Node)); // Vấn đề: malloc không nên ở đây
        (*pT)->Key = x;
        (*pT)->Left = (*pT)->Right = NULL;
        return;
    }
    if (x < (*pT)->Key) {
        insertNode(x, &(*pT)->Left);
    } else if (x > (*pT)->Key) {
        insertNode(x, &(*pT)->Right);
    }
}