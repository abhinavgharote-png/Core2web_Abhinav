#include<stdio.h>

int main()
{
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(int j=rows; j>=1; j--){
			printf("%d\t",j);
		}
		printf("\n");
		
	}

	return 0;
	
}

