/* Write a program to create an array of char that asks the user for the size of an array and elements of an array,
where you have to print the alternate elements of an array */
#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	char charr[size];
	
	for(int i=0; i<size; i++){
	printf("Enter element %d: ",i+1);
	scanf(" %c",&charr[i]);	
	}
	
	printf("Printing the alternate elements of array:\n");
	for(int i=0; i<size; i+=2){
		printf("%c\t",charr[i]);		
	}

	return 0;
	
}

