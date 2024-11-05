void them(int x, NganXep *pS){
    if (pS->Dinh != 0){
         pS->Dinh--;
        pS->DuLieu[pS->Dinh] = x;  
    }
}