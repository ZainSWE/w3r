/*
Write a C program to determine eligibility for admission to a professional course based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 ------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

Expected Output :

The candidate is not eligible for admission.
*/

#include <stdio.h>


int main() {

    char line[100];
    double math, physics, chemistry, total, mptotal;

    printf("Enter Math mark: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &math);

    printf("Enter Physics mark: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &physics);

    printf("Enter Chemistry mark: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &chemistry);

    total = math + physics + chemistry;
    mptotal = math + physics;

    if (math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) {
	printf("The candidate is eligible for admission.\n");
    }

    else if (mptotal >= 140) {
	printf("The candidate is eligible for admission.\n");
    }

    else {
	printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
