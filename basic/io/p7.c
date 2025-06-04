/*
Write a program in C that reads a forename, surname and year of birth and displays the names and the year one after another sequentially.

Expected Output :

Input your firstname: Tom
Input your lastname: Davis
Input your year of birth: 1982
Tom Davis 1982
*/

#include <stdio.h>


int main () {

    int yob;
    char firstname[50];
    char lastname[50];

    printf("Input your firstname: ");
    scanf("%s", firstname);

    printf("Input your lastname: ");
    scanf("%s", lastname);

    printf("Input your year of birth: ");
    scanf("%d", &yob);

    printf("%s %s %d\n", firstname, lastname, yob);

    return 0;
}
