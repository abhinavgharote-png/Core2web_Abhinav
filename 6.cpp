#include<stdio.h>

int main()
{
	int size, sum=0;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<size; i++){
		sum=sum+arr[i];		
	}
	
	printf("Sum of elements : %d",sum);

	return 0;
	
}

