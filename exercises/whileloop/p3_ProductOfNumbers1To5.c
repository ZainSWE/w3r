/*
Write a C program that calculates the product of numbers from 1 to 5 using a while loop.
*/

#include <stdio.h>


int main () {

    int num = 1, product = 1;

    while (num <= 5) {
	product *= num;

	printf("Product of %d = %d\n", num, product);

	num++;
    }

    return 0;
}
