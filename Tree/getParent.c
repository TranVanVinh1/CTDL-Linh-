Tree getParent(int x, Tree T){
	if ( T == NULL || T->Key == x){
		return NULL;
	}
	if (T->Left->Key == x || T->Right->Key ==x ){
		return T;
	}
	if (x > T->Key){ 
 return getParent(x, T->Right);
	}
 		 return getParent(x, T->Left);
}