void enQueue(ElementType X,Queue *pQ){
	if (!fullQueue(*pQ)){
		 if (emptyQueue(*pQ))
		    pQ->Front=0;
		 pQ->Rear=(pQ->Rear+1) % MaxLength;
		 pQ->Elements[pQ->Rear]=X;
	 }
	 else
        printf("Hang day.");
}
    // ==================================
void deQueue(Queue *pQ){
	if (!emptyQueue(*pQ)){
        if (pQ->Front==pQ->Rear)
            makenullQueue(pQ);
		else
		    pQ->Front=(pQ->Front+1) % MaxLength;
    }
    else
        printf("Loi: Hang rong!");
}
