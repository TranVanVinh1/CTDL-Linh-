Tree rightSibling(int x, Tree T){
	if (T == NULL){
		return NULL;
	}
	Tree c = NULL;
	while (T != NULL){
		if (T->Key == x){
			break;
		}
		c = T;
		if (x < T->Key){
			T = T->Left;
		}
		else T = T ->Right;
	}
	if (c->Left == T){
		return c->Right;
	}
	else return NULL;
}