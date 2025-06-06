/*
Write a C program to check whether a character is an alphabet, digit or special character.
Test Data :
@

Expected Output :

This is a special character.
*/

#include <stdio.h>


int main() {

    char line[100];
    char string;

    printf("Input a character: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", &string);

    if (string >= 'a' && string <= 'z') {
	printf("This is an alphabet.\n");
    }

    else if (string >= '0' && string <= '9') {
	printf("This is a number.\n");
    }

    else {
	printf("This is a special character.\n");
    }

    return 0;
}
