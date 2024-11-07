Tree insertNode(Tree T, int key) {
    // Bước 1: Thêm nút mới vào cây nhị phân tìm kiếm
    if (T == NULL) {
        Tree newNode = (Tree)malloc(sizeof(struct Node));
        newNode->key = key;
        newNode->left = newNode->right = NULL;
        newNode->height = 1; // Chiều cao của nút mới là 1
        return newNode;
    }

    if (key < T->key) {
        T->left = insertNode(T->left, key);
    } else if (key > T->key) {
        T->right = insertNode(T->right, key);
    } else {
        return T; // Không cho phép giá trị trùng lặp
    }

    // Bước 2: Cập nhật chiều cao của nút hiện tại
    T->height = 1 + (height(T->left) > height(T->right) ? height(T->left) : height(T->right));

    // Bước 3: Tính hệ số cân bằng của nút hiện tại
    int balance = getBalance(T);

    // Bước 4: Kiểm tra và thực hiện cân bằng nếu cây bị mất cân bằng

    // Trường hợp LL
    if (balance > 1 && key < T->left->key) {
        return rightRotate(T);
    }

    // Trường hợp RR
    if (balance < -1 && key > T->right->key) {
        return leftRotate(T);
    }

    // Trường hợp LR
    if (balance > 1 && key > T->left->key) {
        T->left = leftRotate(T->left);
        return rightRotate(T);
    }

    // Trường hợp RL
    if (balance < -1 && key < T->right->key) {
        T->right = rightRotate(T->right);
        return leftRotate(T);
    }

    // Trả về cây đã cân bằng
    return T;
}