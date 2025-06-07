/*
Write a program in C to accept a grade and declare the equivalent description :
Grade 	Description
E 	Excellent
V 	Very Good
G 	Good
A 	Average
F 	Fail

Test Data :
Input the grade :A
Expected Output :
You have chosen : Average
*/

#include <stdio.h>


int main () {

    char line[100];
    char grade;

    printf("Input grade: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", &grade);

    if (grade == 'E' || grade == 'e') {
	printf("Description: Excellent\n");
    }

    else if (grade == 'V' || grade == 'v') {
	printf("Description: Very Good\n");
    }

    else if (grade == 'G' || grade == 'g') {
	printf("Description: Good\n");
    }

    else if (grade == 'A' || grade == 'a') {
	printf("Description: Average\n");
    }

    else if (grade == 'F' || grade == 'f') {
	printf("Description: Fail\n");
    }

    return 0;
}
