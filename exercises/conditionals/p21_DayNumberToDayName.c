/*
Write a C program to read any day number in integer and display the day name in word format.
Test Data :
4
Expected Output :
Thursday
*/

#include <stdio.h>


int main () {

    char line[100];
    int dayNum;

    printf("Input day #: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &dayNum);

    if (dayNum == 1) {
	printf("Monday\n");
    }

    else if (dayNum == 2) {
	printf("Tuesday\n");
    }

    else if (dayNum == 3) {
	printf("Wednesday\n");
    }

    else if (dayNum == 4) {
	printf("Thursday\n");
    }

    else if (dayNum == 5) {
	printf("Friday\n");
    }

    else if (dayNum == 6) {
	printf("Saturday\n");
    }

    else if (dayNum == 7) {
	printf("Sunday\n");
    }

    else {
	printf("There is only 7 days in a week!\n");
    }

    return 0;
}
