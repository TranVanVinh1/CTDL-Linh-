#define maxlength 40
typedef struct{
    char MSSV[10];
    char hoten[50];
    int lt, th1, th2;
}SinhVien;
typedef struct{
    SinhVien A[maxlength];
    int n;
}List;