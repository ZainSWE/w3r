/*
Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700

Expected Output :

You can booked your profit amount : 200
*/

#include <stdio.h>
#include <string.h>


int main () {

    char line[100];
    char revenue[100];
    int cost, sell, amount;


    printf("Enter cost price: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &cost);

    printf("Enter selling price: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &sell);

    amount = sell - cost;

    if (amount < 0) {
	amount = amount * -1;
    }

    if (cost < sell) {
	strcpy(revenue, "profit");
    }

    else if (cost > sell) {
	strcpy(revenue, "loss");
    }

    else {
	strcpy(revenue, "broke-even");
    }

    if (strcmp(revenue, "profit") == 0) {
	printf("You made a %s of %d.\n", revenue, amount);
    }

    else if (strcmp(revenue, "loss") == 0) {
	printf("You made a %s of %d.\n", revenue, amount);
    }

    else {
	printf("You %s.\n", revenue);
    }

    return 0;
}
