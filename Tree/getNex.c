Tree getNext(int x, Tree T){
	Tree s = NULL;
	while (T != NULL){
		if (x < T->Key){
			s = T;
			T = T->Left;
		}
		else T = T->Right;
	}
	return s;
}
