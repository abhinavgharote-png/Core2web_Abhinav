#include<stdio.h>

int main()
{
	int size, product=1;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<size; i++){
		if(i%2!=0){
			product=product*arr[i];
		}
	}
	
	printf("Product of the odd indexed elements of array : %d",product);

	return 0;
	
}

