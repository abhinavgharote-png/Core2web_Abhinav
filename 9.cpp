/* Write a program to create two integer arrays and calculate the sum of even index
element of first array and odd index element of second array. Print both of the sum. */
#include<stdio.h>

int main()
{
	int n, se=0, so=0;
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
	
	
	for(int i=0; i<n; i+=2){
		se=se+arr1[i];
	}
	
	printf("\nse = %d\n",se);
	
	for(int i=1; i<n; i+=2){
		so=so+arr2[i];
	}
	printf("\nso = %d\n",so);
	
	

	return 0;
	
}

