#include<stdio.h>
int main()
{
	int size;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<size; i++){
		if(arr[i]%5==0){
			printf("First element divisible by 5 found at index number %d",i);
			break;
		}
	}
	return 0;
	
}

