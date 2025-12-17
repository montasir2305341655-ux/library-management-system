/* Test Case 2 */
void test_remove_book() {
    int expected = 4;
    int actual = 2 * 2;
/* ===================== DISPLAY BOOKS ===================== */
void displayBooks() {
    int i;

    if (book_count == 0) {
        printf("\nNo books available in the library.\n");
        return;
    }

    printf("\n----- Library Books -----\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\n");
    printf("-----------------------------------------------\n");

    for (i = 0; i < book_count; i++) {
        printf("%d\t%s\t\t%s\t\t%d\n",
               library[i].id,
               library[i].title,
               library[i].author,
               library[i].quantity);
    }
}
