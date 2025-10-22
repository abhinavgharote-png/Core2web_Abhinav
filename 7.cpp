/* Write a program to create an array of integers that ask user for the size of an array
and elements of the array, where you have to check if the user given element is even or not.
If it is even, then store its sqaure. And if it is odd store its cube. At last print the array*/

#include<stdio.h>

int main()
{	
	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(int i=0; i<size; i++){
		int temp;
					
		printf("Enter element %d: ",i+1);
		scanf("%d",&temp);
		
		if(temp%2==0){
			arr[i]=temp*temp;
		}
		else{
			arr[i]=temp*temp*temp;
		}
	}
	
	
	printf("The array is as follows:\n");
	for(int i=0; i<size; i++){
		printf("%d\t",arr[i]);
	}
	
	return 0;
	
}

