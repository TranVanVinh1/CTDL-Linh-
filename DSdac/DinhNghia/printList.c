void printList(List L) {
    for (int i = 0; i < L.Last; i++) {  // Duyệt qua tất cả các phần tử trong danh sách
        printf("%d ", L.Elements[i]);  // In ra giá trị của phần tử
    }
}