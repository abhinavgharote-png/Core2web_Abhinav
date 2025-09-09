#include<stdio.h>
int main()
{
	int c, d;
	printf("Enter Number1: ");
	scanf("%d",&c);
	
	printf("Enter Number2: ");
	scanf("%d",&d);
	
	if(c>d){
		printf("%d is greater than %d",c,d);
	}
	
	else if(c<d){
		printf("%d is smaller than %d",c,d);
	}
	
	else{
		printf("%d = %d",c,d);
	}

	return 0;
	
}

