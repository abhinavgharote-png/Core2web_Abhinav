/* Write a program where a medical officer is taking in childrens age. Create an array of childrens's age, where children's age should not be more than 5 years.
If user enter children's age above 5 ask him to re-enter the age. Once array is completed print the array. */

#include <stdio.h>

#define MAX_CHILDREN 100  

int main() {
    int ages[MAX_CHILDREN];  
    int num_children;

    printf("Enter the number of children (max %d): ", MAX_CHILDREN);
    scanf("%d", &num_children);

    if (num_children <= 0 || num_children > MAX_CHILDREN) {
        printf("Invalid number of children. Must be between 1 and %d.\n", MAX_CHILDREN);
        return 1;
    }

    for (int i = 0; i < num_children; i++) {
        int age;
        while (1) {
            printf("Enter age for child %d: ", i + 1);
            scanf("%d", &age);

            if (age >= 0 && age <= 5) {
                ages[i] = age;
                break;  
            } else {
                printf("Invalid age! Age must be between 0 and 5. Please re-enter.\n");
            }
        }
    }

    printf("\nCollected children's ages:\n");
    for (int i = 0; i < num_children; i++) {
        printf("Child %d: %d years\n", i + 1, ages[i]);
    }

    return 0;
}

