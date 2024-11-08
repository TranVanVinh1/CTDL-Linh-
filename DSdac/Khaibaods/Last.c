#define maxlength 100
typedef struct {
    int maxchar;
    int A[maxlength];
}List;
 typedef List A;
 typedef int Position;
 typedef struct{
     A A[maxlength];
     Position List;
 }Last;
 // List là một cấu trúc chứa một mảng số nguyên và số lượng phần tử tối đa.
 // A là một bí danh cho kiểu List.
 // Position là một bí danh cho kiểu int.
 // Last là một cấu trúc chứa một mảng các A (tức là mảng các List) và một vị trí (Position).