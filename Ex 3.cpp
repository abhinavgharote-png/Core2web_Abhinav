#include<stdio.h>


int main()
{	
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	if(x%7==0)
	{
		printf("%d is a multiple of 7.\n",x);
	}
	else{
		printf("%d is not a multiple of 7.\n",x);
	}

	if(x>21)
	{
		printf("%d is greater than 21",x);
	}
	else{
		printf("%d is smaller than or equal to 21",x);
	}

	return 0;
	
}

