int getBalance(Tree T){
	if (T == NULL)
		return 0;
	else return height(T->left) - height(T->right);
}