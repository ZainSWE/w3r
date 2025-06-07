/*
Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.

The charge are as follow :
Unit 	Charge/unit
upto 199 	@1.20
200 and above but less than 400 	@1.50
400 and above but less than 600 	@1.80
600 and above 	@2.00

If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-

Test Data :
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00
*/

#include <stdio.h>

int main() {

    char line[100];
    char name[50];
    double chargePerUnit, billAmount, surcharge = 0.0, totalAmount;
    int id, units;

    printf("Enter Customer ID: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &id);

    printf("Enter the name of the customer: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter unit consumed by customer: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &units);

    if (units <= 199) {
        chargePerUnit = 1.20;
    }
    else if (units >= 200 && units < 400) {
        chargePerUnit = 1.50;
    }
    else if (units >= 400 && units < 600) {
        chargePerUnit = 1.80;
    }
    else {
        chargePerUnit = 2.00;
    }

    billAmount = units * chargePerUnit;

    if (billAmount > 400) {
        surcharge = billAmount * 0.15;
    }

    totalAmount = billAmount + surcharge;

    if (totalAmount < 100) {
        totalAmount = 100;
    }

    printf("Electricity Bill:\n");
    printf("Customer ID: %d\n", id);
    printf("Customer Name: %s", name);
    printf("Units consumed: %d\n", units);
    printf("Charge per Unit: $%.2lf CAD\n", chargePerUnit);
    printf("Bill Amount: $%.2lf CAD\n", billAmount);
    printf("Surcharge: $%.2lf CAD\n", surcharge);
    printf("Total Amount to Pay: $%.2lf CAD\n", totalAmount);

    return 0;
}

