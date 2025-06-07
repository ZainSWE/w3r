/*
Write a program in C to read any Month Number in integer and display the number of days for this month.
Test Data :
7

Expected Output :

Month have 31 days
*/

#include <stdio.h>


int main () {

    char line[100];
    int monthNum;

    printf("Input day #: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &monthNum);

    if (monthNum == 1) {
	printf("31 days\n");
    }

    else if (monthNum == 2) {
	printf("28 days\n");
    }

    else if (monthNum == 3) {
	printf("31 days\n");
    }

    else if (monthNum == 4) {
	printf("30 days\n");
    }

    else if (monthNum == 5) {
	printf("31 days\n");
    }

    else if (monthNum == 6) {
	printf("30 days\n");
    }

    else if (monthNum == 7) {
	printf("31 days\n");
    }

    else if (monthNum == 8) {
	printf("31 days\n");
    }

    else if (monthNum == 9) {
	printf("30 days\n");
    }

    else if (monthNum == 10) {
	printf("31 days\n");
    }

    else if (monthNum == 11) {
	printf("30 days\n");
    }

    else if (monthNum == 12) {
	printf("31 days\n");
    }

    else {
	printf("There is only 12 months in a year!\n");
    }

    return 0;
}
