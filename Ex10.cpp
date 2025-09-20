#include<stdio.h>

int main()
{	
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);

	for(int i=1; i<=rows; i++){
		
		if(i%2==1){
			for(int j=1; j<=rows; j++){
				printf("*  ");
			}
			printf("\n");
		}
		
		else{
			for(int j=1; j<=rows; j++){
				printf("#  ");
			}
			printf("\n");
		}
			
				
		}
	
return 0;
	
}

