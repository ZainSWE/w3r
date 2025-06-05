/*
Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7

Expected Output :

Root are imaginary;
No solution.
*/

#include <stdio.h>
#include <math.h>

int main () {

    char line[100];
    double a, b, c, d, proots, qroots;

    printf("Enter 'a' 'b' 'c' values: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf %lf %lf", &a, &b, &c);

    d = (b * b) - (4 * a * c);
    proots = (-b + sqrt(d)) / (2.0 * a);
    qroots = (-b - sqrt(d)) / (2.0 * a);

    if (d == 0) {
	printf("There is one solution.\n");
	printf("First root = %lf\n", proots);
	printf("Second root = %lf\n", qroots);
    }

    else if (d > 0) {
	printf("There are two solutions.\n");
	printf("First root = %lf\n", proots);
	printf("Second root = %lf\n", qroots);
    }

    else if (d < 0) {
        printf("Roots are imaginary, therefore there are no solutions.\n");
    }

    return 0;
}
