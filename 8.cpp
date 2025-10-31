/* Write a program to create two integer arrays of same length and swap the contents of two arrays and print both arrays */
#include<stdio.h>


int main()
{
	int n, temp;
	printf("Enter the size of the arrays.\n");
	scanf("%d",&n);
	
	int arr1[n];
	int arr2[n];
	
	printf("Enter %d elements of the first array.\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter %d elements of the second array.\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr2[i]);
	}
	
	printf("Before swapping.\n");
	printf("Array 1: ");
	for(int i=0; i<n; i++){
		printf("%d\t",arr1[i]);
	}
	
	printf("\nArray 2: ");
	for(int i=0; i<n; i++){
		printf("%d\t",arr2[i]);
	}
	
	for(int i=0; i<n; i++){
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
	
	printf("\nAfter swapping.\n");
	printf("Array 1: ");
	for(int i=0; i<n; i++){
		printf("%d\t",arr1[i]);
	}
	
	printf("\nArray 2: ");
	for(int i=0; i<n; i++){
		printf("%d\t",arr2[i]);
	}
	
	
	
	

	return 0;
	
}

