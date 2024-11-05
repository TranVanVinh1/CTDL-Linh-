void printPath(int x, Tree T){
	if (T == NULL){
		printf ("-> Khong thay");
	}
	else {
		printf ("%d ", T->Key);
		if (x == T->Key){
			printf ("-> Tim thay");
		}
		else T->Key > x ? printPath(x, T->Left) : printPath (x, T->Right);
	}

}