DaThuc khoitao() {
    DaThuc d = (DaThuc)malloc(sizeof(struct Node)); // Cấp phát bộ nhớ cho một Node
    if (d != NULL) {
        d->Next = NULL; // Đặt trường Next bằng NULL
    }
    return d; // Trả về con trỏ đến đa thức
}