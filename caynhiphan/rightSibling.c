Tree rightSibling(int x, Tree T){
    Tree c = NULL;
    while (T != NULL){
        if (x == T->Key)
            break;
        c = T;
        if (x < T->Key)
            T = T->Left;
        else T= T->Right;
    }
    if (c->Left == T){
        return c->Right;
    }
    else return NULL;
}