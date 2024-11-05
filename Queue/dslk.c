void enQueue(ElementType X,Queue *pQ){
	 pQ->Rear->Next=(struct Node*)malloc(sizeof(struct Node)); //them 1 Node vao sau Rear
	 pQ->Rear=pQ->Rear->Next;  //  Tro Rear den Node moi
	 pQ->Rear->Element=X; //Gan gia tri cho Rear
	 pQ->Rear->Next=NULL; //Next cua Rear tro toi Null
}

// ================================================

void deQueue(Queue *pQ){
	if (!emptyQueue(*pQ)){
		Position Tempt;
		Tempt=pQ->Front;
		pQ->Front=pQ->Front->Next;
		free(Tempt);
	}
	else
        printf("Loi: Hang rong!");
}