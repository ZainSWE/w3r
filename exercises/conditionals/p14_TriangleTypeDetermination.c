/*
Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60

Expected Output :

This is an isosceles triangle.
*/

#include <stdio.h>
#include <string.h>


int main () {

    char line[100];
    char triangle[100];
    int s1, s2, s3;


    printf("Input three sides of a triangle: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %d", &s1, &s2, &s3);

    if (s1 == s2 && s1 == s3) {
	strcpy(triangle, "equilateral");
    }


    else if (s1 == s3) {
	strcpy(triangle, "isosceles");
    }


    else {
	strcpy(triangle, "scalene");
    }

    printf("This is an %s triangle.\n", triangle);

    return 0;
}
