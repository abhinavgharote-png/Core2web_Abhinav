#include<stdio.h>

int main()
{
	int N;
	printf("Enter the size of array: ");
	scanf("%d",&N);
	
	char charr[N];
	printf("Enter the elements of array: \n");
	for(int i=0; i<N; i++){
		scanf(" %c",&charr[i]);
	}
	
	printf("The ASCII value of array elements is:\n");
	for(int i=0; i<N; i++){
		printf("%c = %d\n",charr[i],charr[i]);
	}

	return 0;
	
}

