#include<stdio.h>

int main()
{
	int rows;
	char ch='A';
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(ch; ch<='A'+(rows*i)-1; ch++){
			printf("%c\t",ch);
		}
		printf("\n");
	}

	return 0;
	
}

