#include<stdio.h>

int main()
{
	int rows,j;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		if(i%2==1){
			for(j=1; j<=rows; j++){
				printf("%d\t",j);
			}
			printf("\n");
		}
		
		else{
			for(j=rows; j>=1; j--){
				printf("%d\t",j);
			}
			printf("\n");
		}	
	}

return 0;
	
}

