#include<stdio.h>

int main()
{
	int N, sum=0;
	printf("Enter the size of array: ");
	scanf("%d",&N);
	
	int arr[N];
	printf("Enter array elements: ");
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<N; i++){
		sum=sum+(arr[i]*arr[i]);
	}
	
	printf("The sum of the sqaure of all the elements is %d",sum);

	return 0;
	
}

