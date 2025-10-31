/* Write a program to create two integer arrays and check the sum of respective array are same or not */
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
	
	printf("Enter the elements of second array.\n");
	for(int i=0; i<N; i++){
		scanf("%d",&arr2[i]);
	}

	int sum1=0, sum2=0;
	
	for(int i=0; i<N; i++){
		sum1=sum1+arr1[i];
	}
	
	for(int i=0; i<N; i++){
		sum2=sum2+arr2[i];
	}
	
	if(sum1==sum2){
		printf("Sum of elements of array 1 = Sum of elements of array 2");
	}
	else{
		printf("Sum of elements of array 1 != Sum of elements of array 2");
	}

	return 0;
	
}

