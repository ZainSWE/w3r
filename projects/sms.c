/*
Program: Student Management System
Programmer: Zain Ahmad
Description: A simple student database program that allows users to store, update or view student records.
*/

#include <stdio.h>


typedef struct Student {
    int id;
    char name[50];
    double gpa;
} Student;

void studentDetails(Student s[], int studentIndex);

int main () {

    //declaring variables
    Student s[100];
    char buffer[255];
    int menuChoice;
    int studentIndex = 1;
    int searchID;

	//indefinite loop for main menu
	while (1) {

	//main menu options
	printf("\nSelect Option:\n");
	printf("1. Add Student\n");
	printf("2. View Students\n");
	printf("3. Exit\n");
	printf("Enter choice: ");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &menuChoice);

	//if user chooses menu option 1
	if (menuChoice == 1) {

	    printf("\nEnter student details:\n");
	    printf("Student ID: ");
	    fgets(buffer, sizeof(buffer), stdin);
	    sscanf(buffer, "%d", &s[studentIndex].id);

            /*int occupied = s[studentIndex].id;

	    if (s[studentIndex].id == occupied) {
		printf("Error: ID already occupied by another student.\n");
	    	break;
	    }*/

	    printf("Name: ");
	    fgets(buffer, sizeof(buffer), stdin);
	    sscanf(buffer, "%s", s[studentIndex].name);

	    printf("GPA: ");
	    fgets(buffer, sizeof(buffer), stdin);
	    sscanf(buffer, "%lf", &s[studentIndex].gpa);

	    studentIndex++;
	}

	//if user chooses menu option 2
	else if (menuChoice == 2) {
	    printf("\nEnter student ID to view: ");
	    fgets(buffer, sizeof(buffer), stdin);
	    sscanf(buffer, "%d", &searchID);

	    int found = 0;

	    for (int i = 1; i < studentIndex; i++) {
	        if (s[i].id == searchID) {
	            studentDetails(s, i);
	            found = 1;
	            break;
	        }
	    }

	    if (!found) {
	        printf("Student with ID %d not found.\n", searchID);
	    }
		}

		//if user chooses menu option 3
		else if (menuChoice == 3) {
		    printf("\nExited Program.\n");
		    break;
		}

	//if user chooses invalid menu option
	else {
	    printf("\nError: Invalid choice, please try again.\n");
	}
    }

    return 0;
}

void studentDetails(Student s[], int studentIndex) {

     printf("Student ID: %d\n", s[studentIndex].id);
     printf("Name: %s\n", s[studentIndex].name);
     printf("GPA: %.2lf\n", s[studentIndex].gpa);
}
