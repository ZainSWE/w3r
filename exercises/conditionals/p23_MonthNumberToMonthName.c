/*
Write a C program for reading any Month monthber and displaying the Month name as a word.
Test Data :
4

Expected Output :

April
*/

#include <stdio.h>


int main () {

char line[100];
    int month;

    printf("Input month #: ");
    fgets(line, sizeof(line), stdin);

    sscanf(line, "%d", &month);

    if (month == 1) {
	printf("January\n");
    }

    else if (month == 2) {
	printf("February\n");
    }

    else if (month == 3) {
	printf("March\n");
    }

    else if (month == 4) {
	printf("April\n");
    }

    else if (month == 5) {
	printf("May\n");
    }

    else if (month == 6) {
	printf("June\n");
    }

    else if (month == 7) {
	printf("July\n");
    }

    else if (month == 8) {
	printf("August\n");
    }

    else if (month == 9) {
	printf("September\n");
    }

    else if (month == 10) {
	printf("October\n");
    }


    else if (month == 11) {
	printf("November\n");
    }


    else if (month == 12) {
	printf("December\n");
    }

    else {
	printf("There are only 12 months in a year!\n");
    }

    return 0;
}
