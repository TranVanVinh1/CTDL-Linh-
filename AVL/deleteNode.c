Tree deleteNode(Tree root, int key) {
    // Bước 1: Thực hiện xóa nút như trong cây nhị phân tìm kiếm
    if (root == NULL) {
        return root;
    }

    // Tìm nút có giá trị `key` trong cây
    if (key < root->key) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->key) {
        root->right = deleteNode(root->right, key);
    } else {
        // Nút `key` đã được tìm thấy

        // Trường hợp nút có ít nhất một con là NULL
        if ((root->left == NULL) || (root->right == NULL)) {
            Tree temp = root->left ? root->left : root->right;

            // Trường hợp nút không có con nào
            if (temp == NULL) {
                temp = root;
                root = NULL;
            } else {
                *root = *temp; // Sao chép nội dung của con
            }
            free(temp);
        } else {
            // Trường hợp nút có 2 con: tìm giá trị nhỏ nhất ở cây con bên phải
            Tree temp = root->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }

            // Sao chép giá trị của nút nhỏ nhất đó vào nút hiện tại
            root->key = temp->key;

            // Xóa nút nhỏ nhất ở cây con bên phải
            root->right = deleteNode(root->right, temp->key);
        }
    }

    // Nếu cây chỉ có một nút và đã bị xóa thì trả về
    if (root == NULL) {
        return root;
    }

    // Bước 2: Cập nhật chiều cao của nút hiện tại
    root->height = 1 + (height(root->left) > height(root->right) ? height(root->left) : height(root->right));

    // Bước 3: Tính hệ số cân bằng
    int balance = getBalance(root);

    // Bước 4: Kiểm tra và thực hiện cân bằng nếu cây mất cân bằng

    // Trường hợp mất cân bằng bên trái trái
    if (balance > 1 && getBalance(root->left) >= 0) {
        return rightRotate(root);
    }

    // Trường hợp mất cân bằng bên trái phải
    if (balance > 1 && getBalance(root->left) < 0) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Trường hợp mất cân bằng bên phải phải
    if (balance < -1 && getBalance(root->right) <= 0) {
        return leftRotate(root);
    }

    // Trường hợp mất cân bằng bên phải trái
    if (balance < -1 && getBalance(root->right) > 0) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}