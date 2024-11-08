int sotu(Cau d) {
    int count = 0;
    int in_word = 0;  // To track if we're inside a word

    while (d != NULL) {
        if (d->KyTu != ' ') {
            if (!in_word) {
                count++;  // We've encountered the start of a new word
                in_word = 1;
            }
        } else {
            in_word = 0;  // We're outside a word
        }
        d = d->Next;  // Move to the next node
    }

    return count;
}