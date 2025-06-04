/*
Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.
Test Data : 21

Expected Output :

Congratulation! You are eligible for casting your vote.
*/

#include <stdio.h>


int main () {

    char line[100];
    int age;

    printf("Enter your age: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &age);

    if (age >= 18) {
	printf("Congradulations! You are eligible for casting your vote\n");
    }

    else {
	printf("You are not eligible to vote\n");
    }

    return 0;
}
