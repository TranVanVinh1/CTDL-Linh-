#include <stdio.h>

// Hàm chuyển đổi số thập phân sang hệ thập lục phân và in kết quả
void inThaplucphan(int n) {
    Stack s;
    makenullStack(&s); // Khởi tạo ngăn xếp rỗng

    // Xử lý trường hợp đặc biệt nếu n là 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Chuyển đổi số n sang hệ thập lục phân
    while (n > 0) {
        int remainder = n % 16;
        // Chuyển đổi phần dư thành ký tự và đẩy vào ngăn xếp
        if (remainder < 10) {
            push('0' + remainder, &s); // Các chữ số '0'-'9'
        } else {
            push('A' + (remainder - 10), &s); // Các ký tự 'A'-'F'
        }
        n /= 16;
    }

    // In ra các phần tử trong ngăn xếp (theo thứ tự từ đỉnh xuống)
    while (!emptyStack(s)) {
        printf("%c", top(s));
        pop(&s); // Loại bỏ phần tử ở đỉnh sau khi in
    }
}