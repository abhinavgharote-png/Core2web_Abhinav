//Code to determine if entered number is greater than 5 or not

#include<stdio.h>

int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num>5)
	{
		printf("Entered number is greater than 5.");
	}
	
	else
	{
		printf("Number is smaller than or equal to 5.");
	}
	
	return 0;
}

