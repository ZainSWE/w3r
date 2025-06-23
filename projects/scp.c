#include <stdio.h>


void calculation (double price, int amount);

int main () {

    char buffer[255] = "";
    char item[255] = "";
    double price = 0.0;
    int amount = 0;
    int valid = 0;

    for (int j = 0; valid == 0; j++) {
	printf("What item would you like to buy?: ");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%s", item);

	if ((item[0] >= '0') && (item[0] <= '9')) {
	    printf("Error: that is not an item, please try again.\n");
	    valid = 0;
	}

	else if (item[0] == '\0') {
	    printf("Error: please enter an item and try again.\n");
	    valid = 0;
	}

	else {
	    valid = 1;
	}
    }

    printf("What is the price for each?: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%lf", &price);

    for (int k = 0; amount == 0; k++) {
	printf("How many would you like?: ");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &amount);

	if (amount == 0) {
	    printf("Error: you need to buy at least one item.\n");
	}

	else {
	    if (amount == 1) {
		printf("In-cart: %d %s\n", amount, item);
	    }

	    else {
		printf("In-cart: %d %ss\n", amount, item);
	    }
	}
    }


    if (amount == 1) {
	printf("\nYou have bought %d %s\n", amount, item);
    }

    else {
	printf("\nYou have bought %d %ss\n", amount, item);
    }

    calculation(price, amount);

    return 0;
}

void calculation (double price, int amount) {

    double total = price * amount;
    printf("\nThe total is: $%.2lf\n", total);
}
