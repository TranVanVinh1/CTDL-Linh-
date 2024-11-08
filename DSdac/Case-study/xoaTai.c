void xoaTai(int p, DanhSach *pL) {

    if (p >= 0 && p < pL->n) {

        for (int i = p-1; i < pL->n-1 ; i++) {

            pL->A[i] = pL->A[i+1]; // Dời các phần tử phía sau lên 1 vị trí

        }

        pL->n--; // Giảm số lượng sinh viên trong danh sách

    }

}