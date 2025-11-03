#include <stdio.h>

int main() {

    char buffer[255];
    int element;

    printf("Input the number of elements to be stored in the array: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &element);

    int arr1[element];
    int arr2[element];

    printf("Input 3 elements in the array:\n");

    for (int i = 1; i <= element; i++) {
	printf("element - %d: ", i);
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &arr1[i]);
    }

    printf("The elements stored in the first array are:\n");

    for (int i = 1; i <= element; i++) {
	printf("%d ", arr1[i]);
    }

    //copying to array 2

    for (int i = 1; i <= element; i++) {
	arr2[i] = arr1[i];
    }

    printf("\n");

    printf("The elements copied into the second array are:\n");

    for (int i = 1; i <= element; i++) {
	printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}
