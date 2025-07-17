#include <stdio.h>
#include "header.h"

int main () {

    divider(40);

    printf(
    "\nWelcome to the University of Guelph"
    "\nComputer Science Quiz. Here you will"
    "\nbe tested on which courses are included"
    "\nin your program based on the year you select.\n"
    );

    divider(40);

    printf("\n");

    char buffer[255];
    int menuChoice;

    while (1) {
	printf(
	"\nSelect option:"
	"\n1. Enter"
	"\n2. Exit"
	"\nEnter choice: "
	);

	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &menuChoice);

	if (menuChoice == 1) {
	    printf("\nWelcome!\n");
	    menuChoiceOne();
	    break;
	}
	else if (menuChoice == 2) {
	    printf("\nProgram Exited.\n");
	    break;
	}
	else {
	    divider(45);
	    printf("\nError: Invalid menu choice, please try again.\n");
	}
    }

    printf("\n");

    return 0;
}
