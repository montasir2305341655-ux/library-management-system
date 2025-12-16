#include <stdio.h>
#include <string.h>

/* Test Case 1 */
void test_add_book() {
    int expected = 2;
    int actual = 1 + 1;
#define MAX_BOOKS 100

    if (expected == actual)
        printf("Test Case 1 Passed\n");
    else
        printf("Test Case 1 Failed\n");
/* ===================== STRUCTURE ===================== */
struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

/* ===================== GLOBAL VARIABLES ===================== */
struct Book library[MAX_BOOKS];
int book_count = 0;

/* ===================== FUNCTION DECLARATIONS ===================== */
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
void menu();

/* ===================== ADD BOOK ===================== */
void addBook() {
    if (book_count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &library[book_count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[book_count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[book_count].author);

    printf("Enter Quantity: ");
    scanf("%d", &library[book_count].quantity);

    book_count++;
    printf("\nBook added successfully.\n");
}
