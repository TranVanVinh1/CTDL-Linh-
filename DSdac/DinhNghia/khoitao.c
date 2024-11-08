#define MaxLength 100  //Độ dài tối đa của danh sách

typedef int ElementType;  //kiểu của phần tử trong danh sách

typedef int Position;  //kiểu vị trí cuả các phần tử

typedef struct {

    ElementType Elements[MaxLength]; //mảng chứa các phần tử của danh sách

    Position Last;  //giữ độ dài danh sách

  } List;