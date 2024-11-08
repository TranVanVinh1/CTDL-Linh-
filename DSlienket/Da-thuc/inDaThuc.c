#include <stdio.h>
#include <math.h> // Để sử dụng fabs()

void inDaThuc(DaThuc d) {
    int dau = 0; // Biến đánh dấu đơn thức đầu tiên
    Position p;

    for (p = d; p != NULL; p = p->Next) {
        if (p->e.he_so != 0) {
            // In dấu "+" cho các đơn thức từ thứ 2 trở đi
            if (dau) {
                if (p->e.he_so > 0) {
                    printf(" + ");
                } else {
                    printf(" - ");
                }
            } else {
                if (p->e.he_so < 0) {
                    printf("-");
                }
                dau = 1; // Đánh dấu đã in đơn thức đầu tiên
            }

            // In hệ số với 4 chữ số thập phân
            if (fabs(p->e.he_so) != 1 || p->e.bac == 0) {
                printf("%.3lf", fabs(p->e.he_so)); // In hệ số
            } else if (p->e.he_so == 1 && p->e.bac > 0) {
                printf("1.000"); // In 1.0000 cho hệ số 1 khi bậc > 0
            }

            // In biến X và bậc
            if (p->e.bac > 0) {
                printf("X");
                if (p->e.bac > 1) {
                    printf("^%d", p->e.bac);
                }
            } else if (p->e.bac == 0) {
                printf("X^0"); // In X^0 nếu bậc là 0
            }
        }
    }

}