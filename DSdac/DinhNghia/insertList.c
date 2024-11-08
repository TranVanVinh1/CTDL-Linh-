void insertList(int x, int p, List *pL) {
    if (p>=0) {

    for (int i = pL->Last ; i >= p-1; i--) {
        pL->Elements[i] = pL->Elements[i - 1];
    }

    pL->Elements[p-1] = x;

    pL->Last++;
    }
}