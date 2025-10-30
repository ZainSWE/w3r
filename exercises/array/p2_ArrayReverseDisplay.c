#include <stdio.h>

int main() {

    char buffer[255];
    int elements;

    printf("Input the number of elements to store in the array: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &elements);

    int value[elements];

    printf("Input %d number of elements in the array:\n", elements);

    for (int i = 1; i <= elements; i++) {
	printf("element - %d: ", i);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &value[i]);
    }

    printf("The values stored into the array are:\n");

    for (int i = 1; i <= elements; i++) {
	printf("%d ", value[i]);
    }

    printf("\nThe values stored into the array in reverse are:\n");

    for (int i = elements; i >= 1; i--) {
	printf("%d ", value[i]);
    }

    printf("\n");

    return 0;
}
