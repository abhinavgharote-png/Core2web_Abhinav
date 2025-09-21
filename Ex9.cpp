#include<stdio.h>

int main()
{
	int rows;
	char ch='B';
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(int j=1; j<=rows; j++){
			if(j%2==1){
				printf("%d\t",j);
			}
			else{
				printf("%c\t",ch+j-2);
			}
		}
		printf("\n");	
	}

	return 0;
	
}

