//Code to swap two nos.

#include<stdio.h>
int main()
{
	int num1=10;
	int num2=20;
	int temp;
	
	printf("Before swapping \n");
	printf("num1 = %d\nnum2 = %d\n\n", num1, num2);
	
	temp = num2;
	num2 =num1;
	num1 = temp;
	
	printf("After swapping \n");
	printf("num1 = %d\nnum2 = %d", num1, num2);
	
	return 0;
}

