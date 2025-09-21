#include<stdio.h>

int main()
{
	int rows;
	printf("Enter no. of rows: ");
	scanf("%d",&rows);
	
	char ch='A'+rows-1;
	
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=rows; j++){
			printf("%c\t",ch);
		}
		ch--;
		printf("\n");
		
	}

	return 0;
	
}

