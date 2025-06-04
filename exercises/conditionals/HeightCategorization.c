/*
Write a C program to accept the height of a person in centimeters and categorize the person according to their height.
Test Data : 135

Expected Output :

The person is Dwarf.
*/

#include <stdio.h>


int main() {

    char line[100];
    double height;

    printf("Enter height in cm: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &height);

    if (height < 150.0) {
	printf("The person is Dwarf\n");
    }

    else if (height >= 150.0 && height < 165.0 ) {
	printf("The person is Average height\n");
    }

    else if (height >= 165.0) {
	printf("The person is Tall\n");
    }

    return 0;
}
