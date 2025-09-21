#include<stdio.h>
int main()
{
	int rows, j=1;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		for(j; j<rows*2*i ; j++){
			if(j%2==1){
				printf("%d\t",j);
			}
		}
		printf("\n");
	}

	return 0;
	
}

