#include<stdio.h>

int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	if( x%5==0 || x%10==0 )
	{
		printf("Number is divisible.\n");
	}
	
	else {printf("Number is not divisible.");
	}

	return 0;
	
}

