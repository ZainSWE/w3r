/*
Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9

Expected Output :

The coordinate point (7,9) lies in the First quadrant.
*/

#include <stdio.h>


int main () {

    char line[100];
    int x, y;

    printf("Enter coordinates (x y): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &x, &y);

    if (x > 0 && y > 0) {
	printf("The coordinate point (%d,%d) lies in the First quadrant\n", x, y);
    }

    else if (x < 0 && y > 0) {
	printf("The coordinate point (%d,%d) lies in the Second quadrant\n", x, y);
    }

    else if (x < 0 && y < 0) {
	printf("The coordinate point (%d,%d) lies in the Third quadrant\n", x, y);
    }

    else if (x > 0 && y < 0) {
	printf("The coordinate point (%d,%d) lies in the Fourth quadrant\n", x, y);
    }

    return 0;
}
