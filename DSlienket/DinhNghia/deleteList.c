void deleteList(Position p, List *pL) {
    Position t = p->Next;
    p->Next = t->Next;
}