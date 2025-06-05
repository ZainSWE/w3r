/*
Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90

Expected Output :

Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First
*/

#include <stdio.h>
#include <string.h>


int main () {

    char line[100];
    char name[100];
    char division[100];
    int id;
    double physics, chemistry, cs, total, percentage;

    printf("Enter student ID#: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &id);

    printf("Enter the name of the Student: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", name);

    printf("Enter the marks of Physics, Chemistry & Computer Science: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf %lf %lf", &physics, &chemistry, &cs);

    total = physics + chemistry + cs;
    percentage = total / 3;

    if (percentage >= 60) {
	strcpy(division, "First");
    }

    else if (percentage < 60 && percentage >= 48) {
	strcpy(division, "Second");
    }

    else if (percentage < 48 && percentage >= 36) {
	strcpy(division, "Pass");
    }

    else {
	strcpy(division, "Fail");
    }

    printf("Student ID#: %d\n", id);
    printf("Name of Student: %s\n", name);
    printf("Marks in Physics: %.2lf\n", physics);
    printf("Marks in Chemistry: %.2lf\n", chemistry);
    printf("Marks in Computer Science: %.2lf\n", cs);
    printf("Total Marks %.2lf\n", total);
    printf("Percentage %.2lf%%\n", percentage);
    printf("Division = %s\n", division);

    return 0;
}
