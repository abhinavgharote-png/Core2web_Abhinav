/* Write a program to create two integer arrays and check if all elements in the two arrays are equal or not */
#include<stdio.h>

int main()
{
	int N, flag=1;
	printf("Enter the size of both arrays: ");
	scanf("%d",&N);
	
	int arr1[N], arr2[N];
	
	printf("Enter the elements of first array.\n");
	for(int i=0; i<N; i++){
		scanf("%d",&arr1[i]);
	}
	

	printf("Enter the elements of second array.\n");
	for(int i=0; i<N; i++){
		scanf("%d",&arr2[i]);
	}
	
	for(int i=0; i<N; i++){
		if(arr1[i]!=arr2[i]){
		flag=0;
		break;		
		}
	}
	
	if(flag==1){
		printf("The arrays are equal.\n");
	}
	else{
		printf("The arrays are not equal.\n");
	}
		
	return 0;
	
}

