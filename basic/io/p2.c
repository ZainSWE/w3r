/*
Write a C program that calculates the volume of a sphere.

Expected Output :

Input the radius of the sphere : 2.56
The volume of sphere is 70.276237.
*/

#include <stdio.h>
#include <math.h>

int main () {

    char line[100];
    double radius, volume, pi;

    printf("Input the radius of the sphere: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &radius);

    pi = M_PI;
    volume = (4.0 / 3.0) * (pi * (radius * radius * radius));

    printf("The volume of sphere is %lf\n", volume);

    return 0;
}
