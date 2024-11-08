void removeAll(int x, List *pL){
    int p = locate(x, *pL);
        while(p!=pL->Last +1){
            deleteList(p, pL);
            p = locate(x, *pL);
    }
}