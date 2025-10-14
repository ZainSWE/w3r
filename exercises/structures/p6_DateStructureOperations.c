#include <stdio.h>
#include <stdlib.h>


typedef struct Date {

    int day;
    int month;
    int year;

}Date;

void dateInput(Date *x, Date *y);

void calculateDifference(Date *x, Date *y);

int main() {

    Date d1, d2;

    dateInput(&d1, &d2);
    calculateDifference(&d1, &d2);

    return 0;
}

void dateInput(Date *x, Date *y) {

    char line[255];

    do {

	printf("Enter d1 day: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &x->day);

	printf("Enter d1 month: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &x->month);

	printf("Enter d1 year: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &x->year);


	printf("Enter d2 day: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &y->day);

	printf("Enter d2 month: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &y->month);

	printf("Enter d2 year: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &y->year);

	if (x->day > 30 || x->month > 30 || x->year > 739125 || y->day > 30 || y->month > 30 || y->year > 739125) {
	    printf("Error: out-of-bounds, please try again.\n");
	}

    } while (x->day > 30 || x->month > 30 || x->year > 739125 || y->day > 30 || y->month > 30 || y->year > 739125);
}

void calculateDifference(Date *x, Date *y) {

    int yearSum, monthSum, daySum, totalSum = 0;

    x->year = x->year * 365;
    y->year = y->year * 365;

    x->month = x->month * 30;
    y->month = y->month * 30;

    //calculation
    if (x->year > y->year) {
	yearSum = (x->year - y->year);
    }

    else if (x->year < y->year) {
	yearSum = (y->year - x->year);
    }


    if (x->month > y->month) {
	monthSum = (x->month - y->month);
    }

    else if (x->month < y->month) {
	monthSum = (y->month - x->month);
    }


    if (x->day > y->day) {
	daySum = (x->day - y->day);
    }

    else if (x->day < y->day) {
	daySum = (y->day - x->day);
    }

    totalSum = daySum + monthSum + yearSum;

    printf("Day difference: %d\n", daySum);
    printf("Month difference: %d\n", monthSum / 30);
    printf("Year difference: %d\n", yearSum / 365);

    printf("Total difference in days: %d\n", totalSum);


}
