/*
Write a C program to check whether an alphabet is a vowel or a consonant.
Test Data :
k

Expected Output :

The alphabet is a consonant.
*/

#include <stdio.h>


int main () {

    char line[100];
    char letter;

    printf("Enter a letter: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
	printf("The letter is a vowel.\n");
    }

    else {
	printf("The letter is a consonant.\n");
    }

    return 0;
}
