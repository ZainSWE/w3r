/*
Write a C program to find the third angle of a triangle if two angles are given.

Expected Output:

Input two angles of triangle seperated by comma: 50, 70
Third angle of the triangle: 60
*/

#include <stdio.h>


int main() {

    int a1, a2, a3;

    printf("Input two angles of triangle seperated by comma: ");
    scanf("%d,%d", &a1, &a2);

    a3 = 180 - (a1 + a2);

    printf("Third angle of the triangle: %d\n", a3);

    return 0;
}
