/* Write a program to create two integer arrays and print the alternate elements from both arrays */

#include <stdio.h>

int main() {
    int n1, n2, i;

    // Input size of first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Print alternate elements from both arrays
    printf("\nAlternate elements from both arrays:\n");

    printf("From first array: ");
    for (i = 0; i < n1; i += 2) {
        printf("%d ", arr1[i]);
    }

    printf("\nFrom second array: ");
    for (i = 0; i < n2; i += 2) {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    return 0;
}

