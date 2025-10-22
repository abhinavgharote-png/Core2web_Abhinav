/* Write a program to create an array of integers that asks the user for the size of an array
and elements of the array. Now print the array in reverse alterante order. */
#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);		
	}

	printf("Printing the elements of array in reverse alterante order: ");
	for(int i=size-1; i>=0; i-=2){
		printf("%d\t",arr[i]);
		
	}
	
	
	return 0;
	
}

