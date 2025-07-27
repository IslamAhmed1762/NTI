#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100
#define TITLE_LEN 100
#define AUTHOR_LEN 100


typedef enum {
    AVAILABLE,
    BORROWED
} Status;

typedef struct {
    int id;
    char title[TITLE_LEN];
    char author[AUTHOR_LEN];
    int year;
    Status status;
} Book;

static Book books[MAX_BOOKS];
static int bookCount = 0;

void addBook();
void displayBooks();
void searchBook();
void deleteBook();
void updateStatus();
void printStatus(Status s);

int main() {
    int choice;
    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Update Book Status\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            continue;
        }
        getchar();

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: updateStatus(); break;
            case 6: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }
    Book b;
    printf("Enter ID: ");
    if (scanf("%d", &b.id) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    getchar();
    printf("Enter Title: ");
    fgets(b.title, TITLE_LEN, stdin);
    b.title[strcspn(b.title, "\n")] = 0;
    printf("Enter Author: ");
    fgets(b.author, AUTHOR_LEN, stdin);
    b.author[strcspn(b.author, "\n")] = 0;
    printf("Enter Year: ");
    if (scanf("%d", &b.year) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    b.status = AVAILABLE;
    books[bookCount++] = b;
    printf("Book added successfully!\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("No books to display.\n");
        return;
    }
    printf("\n%-5s %-25s %-20s %-6s %-10s\n", "ID", "Title", "Author", "Year", "Status");
    for (int i = 0; i < bookCount; i++) {
        printf("%-5d %-25s %-20s %-6d ", books[i].id, books[i].title, books[i].author, books[i].year);
        printStatus(books[i].status);
        printf("\n");
    }
}

void searchBook() {
    int id;
    printf("Enter ID to search: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            printf("\nFound Book:\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\nStatus: ", books[i].id, books[i].title, books[i].author, books[i].year);
            printStatus(books[i].status);
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) printf("Book not found.\n");
}

void deleteBook() {
    int id;
    printf("Enter ID to delete: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                books[j] = books[j + 1];
            }
            bookCount--;
            printf("Book deleted successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void updateStatus() {
    int id;
    printf("Enter ID to update status: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            books[i].status = (books[i].status == AVAILABLE) ? BORROWED : AVAILABLE;
            printf("Status updated successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void printStatus(Status s) {
    if (s == AVAILABLE)
        printf("Available");
    else
        printf("Borrowed");
}
