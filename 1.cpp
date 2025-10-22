#include<stdio.h>

int main()
{
	int N;
	printf("Enter the size of array: ");
	scanf("%d",&N);
	while(N<=1){
		printf("Invalid input. Enter valid size!\n");
		scanf("%d",&N);
	}
	
	int arr[N];
	printf("Enter array elements: ");
	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Here is your array in reverse order.\n");
	for(int i=0; i<N; i++){
		printf("%d\t",arr[N-1-i]);
	}

	return 0;
	
}

