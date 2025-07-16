#include <stdio.h>

typedef struct {
    int id;
    char name[255];
    double salary;
} Employee;

int main () {

    Employee e1, e2, e3;
    char line[255];

    printf("Input details for Employee 1:\n");
    printf("Employee ID: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &e1.id);

    printf("Employee name: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", e1.name);

    printf("Employee salary: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &e1.salary);

    printf("\nInput details for Employee 2:\n");
    printf("Employee ID: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &e2.id);

    printf("Employee name: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", e2.name);

    printf("Employee salary: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &e2.salary);

    printf("\nInput details for Employee 3:\n");
    printf("Employee ID: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &e3.id);

    printf("Employee name: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", e3.name);

    printf("Employee salary: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &e3.salary);

    if (e1.salary > e2.salary && e1.salary > e3.salary) {
	printf("Employee with the Highest Salary:\n");
	printf("Employee ID: %d\n", e1.id);
	printf("Name: %s\n", e1.name);
	printf("Salary: %lf\n", e1.salary);
    }

    else if (e2.salary > e1.salary && e2.salary > e3.salary) {
	printf("Employee with the Highest Salary:\n");
	printf("Employee ID: %d\n", e2.id);
	printf("Name: %s\n", e2.name);
	printf("Salary: %lf\n", e2.salary);
    }

    else if (e3.salary > e1.salary && e3.salary > e2.salary) {
	printf("Employee with the Highest Salary:\n");
	printf("Employee ID: %d\n", e3.id);
	printf("Name: %s\n", e3.name);
	printf("Salary: %lf\n", e3.salary);
    }

    printf("\n");

    return 0;
}
