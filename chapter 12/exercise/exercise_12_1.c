#include <stdio.h>

struct book {

	char author[20];
	char title[20];
	char publisher[20];
	int p_year;
	int page;
	int price;
};
typedef struct book BOOK;
int main() {
	BOOK b1;
	printf("Enter the details of this book's author, title, publisher, publishing year, page and, price respectivly :");
	scanf("%s%s%s%d%d%d",b1.author,b1.title, b1.publisher, &b1.p_year, &b1.page, &b1.price);
	printf("\n");
	printf("Book tile: %s\n", b1.author);
    printf("Author: %s\n",b1.author);
	printf("Publisher: %s\n",b1.publisher);
	printf("Publishing year: %d\n",b1.p_year);
	printf("Page: %d\n",b1.page);
	printf("Price: %d\n",b1.price);
	return(0);
}