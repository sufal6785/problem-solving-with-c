#include <stdio.h>
#include <string.h>

struct book {
    char author[20];
    char title[20];
    char publisher[20];
    int p_year;
    int page;
    int price;
};
typedef struct book BOOK;

BOOK b[100];

void InputBookInfo(int n) {
    printf("Enter the details of each book (author, title, publisher, year, pages, price):\n");
    for (int i = 0; i < n; i++) {
        printf("\nFor book no %d:\n", i + 1);
        scanf("%s%s%s%d%d%d", b[i].author, b[i].title, b[i].publisher, &b[i].p_year, &b[i].page, &b[i].price);
    }
}

void OutputBookInfo(int n) {
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Publisher: %s\n", b[i].publisher);
        printf("Publishing Year: %d\n", b[i].p_year);
        printf("Pages: %d\n", b[i].page);
        printf("Price: %d\n", b[i].price);
    }
}

void AuthorBook(char author[20], int n) {
    printf("\nBooks by author: %s\n", author);
    for (int i = 0; i < n; i++) {
        if (strcmp(b[i].author, author) == 0) {
            printf("Title: %s, Publisher: %s, Year: %d, Pages: %d, Price: %d\n",
                   b[i].title, b[i].publisher, b[i].p_year, b[i].page, b[i].price);
        }
    }
}

void PublisherYearBook(char publisher[20], int year, int n) {
    printf("\nBooks by publisher: %s in year: %d\n", publisher, year);
    for (int i = 0; i < n; i++) {
        if (strcmp(b[i].publisher, publisher) == 0 && b[i].p_year == year) {
            printf("Title: %s, Author: %s, Pages: %d, Price: %d\n",
                   b[i].title, b[i].author, b[i].page, b[i].price);
        }
    }
}

void SortByPrice(int n) {
    BOOK temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (b[i].price > b[j].price) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nBooks sorted by increasing price:\n");
    OutputBookInfo(n);
}

void SortByAuthorAndTitle(int n) {
    BOOK temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(b[i].author, b[j].author) > 0 ||
                (strcmp(b[i].author, b[j].author) == 0 && strcmp(b[i].title, b[j].title) > 0)) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("\nBooks sorted by author and title:\n");
    OutputBookInfo(n);
}

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    InputBookInfo(n);
    OutputBookInfo(n);

    char author[20];
    printf("\nEnter the author's name to search: ");
    getchar(); 
    fgets(author, 20, stdin);
    author[strcspn(author, "\n")] = 0; 
    AuthorBook(author, n);

    char publisher[20];
    int year;
    printf("\nEnter publisher and year to search: ");
    scanf("%s%d", publisher, &year);
    PublisherYearBook(publisher, year, n);

    SortByPrice(n);
    SortByAuthorAndTitle(n);

    return 0;
}
