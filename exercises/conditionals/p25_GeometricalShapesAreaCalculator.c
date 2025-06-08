/*
Write a C program which computes the area of various geometrical shapes using a menu-driven approach.
Test Data :
1
5

Expected Output :

The area is : 78.500000
*/

#include <stdio.h>


int main () {

    char line[100];
    int menuOption;
    double length, width, radius, base, height, area;

    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");

    printf("Select an option: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &menuOption);

    if (menuOption == 1) {
	printf("Enter length & width: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf %lf", &length, &width);

	area = length * width;

	printf("Area of Rectangle = %.2lf\n", area);
    }

    else if (menuOption == 2) {
	printf("Enter radius: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf", &radius);

	area = (3.14 * (radius * radius));

	printf("Area of Circle = %.2lf\n", area);
    }

    else if (menuOption == 3) {
	printf("Enter base & height: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf %lf", &base, &height);

	area = (base * height) / 2;

	printf("Area of Triangle = %.2lf\n", area);
    }

    return 0;
}

