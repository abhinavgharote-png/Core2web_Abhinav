#include<stdio.h>

int main()
{
	int rows;
	char ch='A';
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		
		for(int j=1; j<=rows; j++){
			printf("%c\t",ch);
		}
		ch++;
		printf("\n");
		
	}

	return 0;
	
}

