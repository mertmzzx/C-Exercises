#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

typedef struct {
    struct Books books[MAX_BOOKS];
    int bookCount;
} Library;

void printBook(struct Books book) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
    printf("-----------------------------\n");
}

void printLibrary(Library lib) {
    printf("Library contains %d books:\n\n", lib.bookCount);
    for (int i = 0; i < lib.bookCount; i++) {
        printBook(lib.books[i]);
    }
}

int main() {
    Library myLibrary; // Без "struct"
    myLibrary.bookCount = 2;

    strcpy(myLibrary.books[0].title, "C Programming");
    strcpy(myLibrary.books[0].author, "Spiridon Haralampiev");
    strcpy(myLibrary.books[0].subject, "C Programming Tutorial");
    myLibrary.books[0].book_id = 6495407;

    strcpy(myLibrary.books[1].title, "BPE materials");
    strcpy(myLibrary.books[1].author, "Haralampi Spiridonov");
    strcpy(myLibrary.books[1].subject, "Materials for BPE subject");
    myLibrary.books[1].book_id = 6495700;

    printLibrary(myLibrary);

    return 0;
}
