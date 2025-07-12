#include <stdio.h>

typedef struct Student {

    char name[255];
    int age;
    double totalMarks;

} Student;

int main () {

    char line[255];
    struct Student s1, s2;
    double averageMarks;

    //student 1:

    printf("Input details for Student 1:\n");

    printf("Name: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", s1.name);

    printf("Age: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &s1.age);

    printf("Total Marks: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &s1.totalMarks);

    //student 2:

    printf("\nInput details for Student 2:\n");

    printf("Name: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", s2.name);

    printf("Age: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &s2.age);

    printf("Total Marks: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &s2.totalMarks);

    //printing student details

    printf("\nStudent 1 Information:\n");

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Total Marks: %.2lf\n", s1.totalMarks);

    printf("\nStudent 2 Information:\n");

    printf("Name: %s\n", s2.name);
    printf("Age: %d\n", s2.age);
    printf("Total Marks: %.2lf\n", s2.totalMarks);

    //calculating average marks:

    averageMarks = (s1.totalMarks + s2.totalMarks) / 2;
    printf("\nAverage Total Marks: %.2lf\n", averageMarks);

    printf("\n");

    return 0;
}
