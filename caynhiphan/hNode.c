int cc(Tree T){
	if (T == NULL){
		return -1;
	}
	int t = cc(T->Left);
	int p = cc(T->Right);
	return 1+ (t>p ? t : p);
}
int hNode(int x, Tree T){
	while (T != NULL){
		if (x == T->Key){
			return cc(T);
		}
		else if (x < T->Key)
			T = T->Left;
		else if (x > T->Key)
			T = T->Right;
	}
	return -1;
}