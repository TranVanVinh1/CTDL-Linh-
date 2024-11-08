void sort(List *pL) {
    for (int p = 0; p < pL->Last - 1; p++) {  // Duyệt từ phần tử đầu tiên đến phần tử kế cuối
        for (int q = p + 1; q < pL->Last; q++) {  // Duyệt từ phần tử kế tiếp p đến phần tử cuối cùng
            if (pL->Elements[p] > pL->Elements[q]) {  // Nếu phần tử tại p lớn hơn phần tử tại q
                // Hoán đổi giá trị hai phần tử
                int temp = pL->Elements[p];
                pL->Elements[p] = pL->Elements[q];
                pL->Elements[q] = temp;
            }
        }
    }
}