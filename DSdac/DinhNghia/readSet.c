void readSet(List *pL){
    makenullList(pL);
    int n,x;
    scanf ("%d", &n);
    for (int i=0;i<n;i++){
        
        scanf ("%d", &x);
        if (!member(x, *pL)){
        insertSet(x,pL);
    }
}}