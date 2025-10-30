#include <stdio.h>
#include <stdlib.h>

int main() {

    char buffer[255];
    int input[10];

    printf("Input 10 elements in the array:\n");

    for (int i = 0 + 1; i <= 10; i++) {
	printf("element - %d: ", i);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d\n", &input[i]);
    }

    printf("Elements in array are: ");

    for (int i = 0; i < 10; i++) {
	printf("%d ", input[i]);
    }

    printf("\n");

    return 0;
}
