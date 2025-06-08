/*
Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
*/

#include <stdio.h>


int main () {

    int x = -1, z = 11;

    while (x < 10) {
	x = x + 1;
	printf("%d ", x);
    }

    printf("\n");

    while (z > 0) {
	z = z - 1;
	printf("%d ", z);
    }

    printf("\n");

    return 0;
}
