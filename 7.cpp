#include<stdio.h>

int main()
{
	int size, sum_E=0, sum_O=0;
	printf("Enter the array size: ");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<size; i++){
		if(i%2==0){
			sum_E=sum_E+arr[i];
		}
		
		else{
			sum_O=sum_O+arr[i];
		}
	}
	
	printf("Sum_of_even_indexed - Sum_of_odd_indexed = %d",sum_E-sum_O);

	return 0;
	
}

