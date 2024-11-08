List readSet() {
    List L;
    int n, x;

    makenullList(&L); // Khởi tạo danh sách rỗng

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (!member(x, L)) { // Nếu x chưa có trong danh sách
            addFirst(x, &L);
        } 
    }

    return L;
}