/* ===================== RETURN BOOK ===================== */
void returnBook() {
    int id, i;

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            library[i].quantity++;
            printf("\nBook returned successfully.\n");
            return;
        }
    }

    printf("\nBook not found.\n");
}
