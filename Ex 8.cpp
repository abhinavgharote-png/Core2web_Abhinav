#include<stdio.h>

int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	printf("\n");
	
	if(x%2==0)
	{
	printf("Number is even\n");
	}
	
	else{printf("Number is odd.\n");
	}

	return 0;
	
}

