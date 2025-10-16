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
	
	printf("The even number in array are as follow:\n");
	
	for(int i=0; i<size; i++){
		if(arr[i]%2==0){
			printf("%d\t",arr[i]);
		}
	}

	return 0;
	
}

