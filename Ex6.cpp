#include<stdio.h>

int main()
{	
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(int j; j<=rows*i; j++){
			printf("%d\t",j*rows);
		}
		printf("\n");
	}
return 0;
}

