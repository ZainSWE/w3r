#include <stdio.h>

int main() {

    char buffer[255];
    int element;

    printf("Input the number of elements to be stored in the array: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &element);

    int value[element];

    printf("Input %d element(s) in the array:\n", element);

    for (int i = 1; i <= element; i++) {
	printf("element - %d: ", element);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &value[i]);
    }

    int sum = 0;

    for (int i = 1; i <= element; i++) {
	sum = sum + value[i];
    }

    printf("Sum of all elements stored in the array is: %d\n", sum);

    return 0;
}
