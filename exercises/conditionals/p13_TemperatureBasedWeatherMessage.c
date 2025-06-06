/*
Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42

Expected Output :

Its very hot.
*/

#include <stdio.h>


int main () {

    char line[100];
    double temperature;

    printf("Enter temperature in centigrade: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &temperature);

    if (temperature < 0) {
	printf("Freezing weather\n");
    }

    else if (temperature > 0 && temperature <= 10.0) {
	printf("Very Cold weather\n");
    }

    else if (temperature > 10.0 && temperature <= 20.0) {
	printf("Cold weather\n");
    }

    else if (temperature > 20.0 && temperature <= 30.0) {
	printf("Normal in Temp\n");
    }

    else if (temperature > 30.0 && temperature < 40.0) {
	printf("It's Hot\n");
    }

    else if (temperature >= 40.0) {
	printf("Very Hot\n");
    }

    else {
	printf("That is not a valid temperature\n");
    }

    return 0;
}
