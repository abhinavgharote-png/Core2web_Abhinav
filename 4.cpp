/* Write a program to create two integer arrays and check whether the arrays have the same length or not */
#include<stdio.h>

int main()
{
	int N1, N2;
	printf("Enter the size of array 1: ");
	scanf("%d",&N1);
	
	int arr1[N1];
	
	/* printf("Enter the elements of first array.\n");
	for(int i=0; i<N; i++){
		scanf("%d",&arr1[i]);
	} */
	
	printf("Enter the size of array 2: ");
	scanf("%d",&N2);
	
	int arr2[N2];
	
	/* printf("Enter the elements of second array.\n");
	for(int i=0; i<N; i++){
		scanf("%d",&arr2[i]);
	} */
	
	if(N1==N2){
		printf("The length of both arrays is same.");
	}
	else{
		printf("The length of both arrays is not same");
	}

	return 0;
	
}

