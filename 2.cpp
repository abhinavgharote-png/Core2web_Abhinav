/* Write a program to create an integer array of N elements.
Copy the array elements into another array in reverse order and print the second array */
#include<stdio.h>


int main()
{
	int N;
	printf("Enter the size of array: ");
	scanf("%d",&N);
	
	int arr1[N];
	
	printf("Enter the elements of first array.\n");
	for(int i=0; i<N; i++){
		scanf("%d",&arr1[i]);
	}
	
	int arr2[N];
	for(int i=0; i<N; i++){
		arr2[i]=arr1[N-1-i];
	}

	printf("The elements of the second array are as follows:\n ");
	for(int i=0; i<N; i++){
		printf("%d\t",arr2[i]);
	}
	
	return 0;
	
}

