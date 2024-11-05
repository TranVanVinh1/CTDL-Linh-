void chuyenHauto(char *trungto, char *hauto) {
    Stack temp;
    makenullStack(&temp);
    int i =0, j = 0;
    while(trungto[i] != '\0') {
     if((trungto[i] >= '0' && trungto[i] <= '9') || (trungto[i] >= 'a' && trungto[i] <= 'z')) {
         hauto[j++] = trungto[i];
     }   
     else if(trungto[i] == '(') {
         push(trungto[i], &temp);
     }
     else if(trungto[i] == ')') {
         while(top(temp) != '(') {
             hauto[j++]=top(temp);
             pop(&temp);
         }
        //  if(!emptyStack(temp)){
         pop(&temp);
             
         //}
     }
     else if(trungto[i] == '+' || trungto[i] == '-' || trungto[i] == '*' || trungto[i] == '/'){
         while(emptyStack(temp) != 1 && top(temp) != '(' && mucUutien(trungto[i]) <= mucUutien(top(temp)) ) {
             hauto[j++] = top(temp);
             pop(&temp);
         }
         push(trungto[i], &temp);
     }
     else;
     i++;
    }
    while(emptyStack(temp) != 1) {
        hauto[j++] = top(temp);
        pop(&temp);
    }
    hauto[j] = '\0';
}