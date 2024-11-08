void removeAll(int x, List *pL) {
    Position p = locate(x, *pL); // Tìm vị trí xuất hiện đầu tiên của x

    while (p != NULL) { // Khi còn vị trí hợp lệ
        deleteList(p, pL); // Xóa phần tử tại vị trí p
        
        p = p->Next;// Tìm vị trí xuất hiện tiếp theo của x
    }
}