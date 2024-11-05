float tinhGiatri(char *hauto) {
    float res = 0;
    Stack A;
    makenullStack(&A);
    
    int i = 0;
    while (hauto[i] != '\0') {
        if (hauto[i] >= '0' && hauto[i] <= '9') {
            // Chuyển ký tự thành số (cần chuyển đổi ký tự sang số thực)
            float temp = hauto[i] - '0'; // Sửa dòng này để chuyển ký tự sang số
            push(temp, &A);
        } else {
            float temp1, temp2; // Khai báo biến tạm để lưu giá trị
            
            if (hauto[i] == '+') {
                // Thực hiện phép cộng
                temp2 = top(A);
                pop(&A);
                temp1 = top(A);
                pop(&A);
                res = temp1 + temp2;
                push(res, &A); // Đẩy kết quả trở lại stack
            } else if (hauto[i] == '-') {
                // Thực hiện phép trừ
                temp2 = top(A);
                pop(&A);
                temp1 = top(A);
                pop(&A);
                res = temp1 - temp2;
                push(res, &A); // Đẩy kết quả trở lại stack
            } else if (hauto[i] == '*') {
                // Thực hiện phép nhân
                temp2 = top(A);
                pop(&A);
                temp1 = top(A);
                pop(&A);
                res = temp1 * temp2;
                push(res, &A); // Đẩy kết quả trở lại stack
            } else if (hauto[i] == '/') {
                // Thực hiện phép chia
                temp2 = top(A);
                pop(&A);
                temp1 = top(A);
                pop(&A);
                res = temp1 / temp2;
                push(res, &A); // Đẩy kết quả trở lại stack
            }
        }
        i++; // Di chuyển đến ký tự tiếp theo
    }

    // Kết quả cuối cùng nằm ở đỉnh stack
    res = top(A);
    pop(&A); // Xóa kết quả ra khỏi stack
    return res; // Trả về kết quả
}