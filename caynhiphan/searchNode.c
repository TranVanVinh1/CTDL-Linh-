Tree searchNode(int x, Tree T){
    while (T != NULL){
        if (T->Key == x){
            return T;
        }
        else if (x > T->Key){
            T= T->Right;
        }
        else if (x < T->Key){
            T=T->Left;
        }
    }
    return NULL;
}