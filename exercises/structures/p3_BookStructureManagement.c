#include <stdio.h>


typedef struct Book {
    char title[255];
    char author[255];
    double price;
} Book;

int main () {

    struct Book b1, b2, b3;
    char line[255];

    //book 1

    printf("Input details for Book 1:\n");

    printf("Title: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", b1.title);

    printf("Author: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", b1.author);

    printf("Price: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &b1.price);

/* TEST OUTPUT

    printf("Title: %s\nAuthor: %s\nPrice: %.2lf\n", b1.title, b1.author, b1.price);
*/

    //book 2

    printf("\nInput details for Book 2:\n");

    printf("Title: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", b2.title);

    printf("Author: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", b2.author);

    printf("Price: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &b2.price);

    //book 3

    printf("\nInput details for Book 2:\n");

    printf("Title: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", b3.title);

    printf("Author: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", b3.author);

    printf("Price: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &b3.price);

    //most expensive book

    if (b1.price > b2.price && b1.price > b3.price) {
	printf("\nMost Expensive Book:\n");
	printf("Title: %s\n", b1.title);
	printf("Author: %s\n", b1.author);
	printf("Price: %.2lf\n", b1.price);
    }

    else if (b2.price > b1.price && b2.price > b3.price) {
	printf("\nMost Expensive Book:\n");
	printf("Title: %s\n", b2.title);
	printf("Author: %s\n", b2.author);
	printf("Price: %.2lf\n", b2.price);
    }

    else if (b3.price > b1.price && b3.price > b2.price) {
	printf("\nMost Expensive Book:\n");
	printf("Title: %s\n", b3.title);
	printf("Author: %s\n", b3.author);
	printf("Price: %.2lf\n", b3.price);
    }

    //lowest priced book

    if (b1.price < b2.price && b1.price < b3.price) {
	printf("\nLowest Priced Book:\n");
	printf("Title: %s\n", b1.title);
	printf("Author: %s\n", b1.author);
	printf("Price: %.2lf\n", b1.price);
    }

    else if (b2.price < b1.price && b2.price < b3.price) {
	printf("\nLowest Priced Book:\n");
	printf("Title: %s\n", b2.title);
	printf("Author: %s\n", b2.author);
	printf("Price: %.2lf\n", b2.price);
    }

    else if (b3.price < b1.price && b3.price < b2.price) {
	printf("\nLowest Priced Book:\n");
	printf("Title: %s\n", b3.title);
	printf("Author: %s\n", b3.author);
	printf("Price: %.2lf\n", b3.price);
    }

    return 0;
}
