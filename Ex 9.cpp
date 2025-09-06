#include<stdio.h>

int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d",&x);
	
	if(x<10)
	{
		printf("Number is less than 10");
	}
	
	else if(x>=10 && x<20)
	{printf("Number is greater than 10 but less than 20.");
	}
	
	else {
		printf("Happy coding!");
	}
	return 0;
	
}

