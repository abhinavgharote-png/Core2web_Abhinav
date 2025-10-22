/* Write a program to create an array of integers that asks the user for the size of an array 
and elements of the array. Also ask for the index value upto to which elements shall be printed */
#include<stdio.h>

int main()
{
	int size, index;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	int arr[size];
	
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);		
	}
	
	printf("Enter the index upto to which you want to print the elements: ");
	scanf("%d",&index);
	
	while(index>=size){
		printf("Index should be less than size. Please re-enter: ");
		scanf("%d",&index);
	}
	
	for(int i=0; i<=index; i++){
		printf("%d\t",arr[i]);
	}

	return 0;
	
}

