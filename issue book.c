/* ===================== ISSUE BOOK ===================== */
void issueBook() {
    int id, i;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            if (library[i].quantity > 0) {
                library[i].quantity--;
                printf("\nBook issued successfully.\n");
            } else {
                printf("\nBook is currently unavailable.\n");
            }
            return;
        }
    }

    printf("\nBook not found.\n");
}
