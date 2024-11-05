Tree getPrevious(int x, Tree T){
	Tree t= NULL;
	while (T != NULL){
		if (x > T->Key){
			t = T;
			T = T -> Right;
		}
		else T = T->Left;
	}
	return t;
}