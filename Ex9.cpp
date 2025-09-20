#include<stdio.h>

int main()
{
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
	
	for(char ch='a'; ch<='a'+rows-1; ch++){
	
		printf("%c1  ",ch);
	}
	
	printf("\n");
	}
	return 0;
	
}

