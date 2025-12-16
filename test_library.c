#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

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

/* ===================== SEARCH BOOK ===================== */
void searchBook() {
    int id, i, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            printf("\nBook Found!\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\n",
                   library[i].id,
                   library[i].title,
                   library[i].author,
                   library[i].quantity);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nBook not found.\n");
    }
}

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

/* ===================== MENU ===================== */
void menu() {
    int choice;

    do {
        printf("\n====== Library Management System ======\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("\nThank you for using Library Management System.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 6);
}

/* ===================== MAIN FUNCTION ===================== */
int main() {
    menu();
    return 0;
}
