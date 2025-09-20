#include<stdio.h>

int main()
{
	int rows, j=1;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(j; j<=rows*i; j++){
			printf("%d\t",j);
		}
		printf("\n");
		
	}


	return 0;
	
}

