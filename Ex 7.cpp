//Program to check if entered number is less than 100 or not

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num<100)
	{
		printf("Number is less than 100");
	}
	
	else{ printf("Entered number is greater than or equal to 100");
	}

	return 0;
	
}

