/*
Write a program in C to read any digit and display it in the word.
Test Data :
4

Expected Output :

Four
*/

#include <stdio.h>


int main () {

    char line[100];
    int num;

    printf("Input number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);

    if (num == 1) {
	printf("One\n");
    }

    else if (num == 2) {
	printf("Two\n");
    }

    else if (num == 3) {
	printf("Three\n");
    }

    else if (num == 4) {
	printf("Four\n");
    }

    else if (num == 5) {
	printf("Five\n");
    }

    else if (num == 6) {
	printf("Six\n");
    }

    else if (num == 7) {
	printf("Seven\n");
    }

    else if (num == 8) {
	printf("Eight\n");
    }

    else if (num == 9) {
	printf("Nine\n");
    }

    else if (num == 10) {
	printf("Ten\n");
    }

    else {
	printf("Max digit limit: 10\n");
    }

    return 0;
}
