#define maxlength 80
typedef struct {
    int maxchar; //là một biến số nguyên dùng để lưu số lượng ký tự tối đa có thể lưu trữ trong danh sách ký tự.
    char list[maxlength]; //là một mảng ký tự với độ dài tối đa được định nghĩa bởi maxlength (80 ký tự). 
                                //Mảng này được sử dụng để lưu trữ một chuỗi ký tự.
}Line;
  typedef Line charlist;
  typedef int Position;
typedef struct{
    charlist charlist[maxlength];
    Position Line;
}List;
// Line là một cấu trúc chứa một mảng ký tự và số lượng ký tự tối đa.
// charlist là một bí danh cho kiểu Line.
// Position là một bí danh cho kiểu int.
// List là một cấu trúc chứa một mảng các charlist (tức là mảng các Line) và một vị trí dòng (Position).