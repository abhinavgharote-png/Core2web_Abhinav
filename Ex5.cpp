#include<stdio.h>

int main()
{
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=rows; j++){
			printf("1A\t");
		}
		printf("\n");
		
	}

	return 0;
	
}

