typedef struct Node* Cau;
int ktRong(Cau d){
    if (d->Next == NULL){
        return 1;
    }
    return 0;
}