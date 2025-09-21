#include<stdio.h>
int main()
{
	int rows;
	printf("Enter number of rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++){
		if(i%2==1){
			for(char ch='A'; ch<='A'+rows-1; ch++){
				printf("%c\t",ch);			
			}
			printf("\n");
		}
		else{ 
			for(char ar='a'; ar<='a'+rows-1; ar++){
				printf("%c\t",ar);	
			}
			printf("\n");
		}
}
return 0;
}

