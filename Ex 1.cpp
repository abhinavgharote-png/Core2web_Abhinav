//Program to check whether the entered no is within 1 to 1000 or not

#include<stdio.h>

int main()
{
	int input_num;
	printf("Enter a number: \n");
	scanf("%d",&input_num);
	
	if(input_num>=1 && input_num<=1000){
		
		printf("Entered number is within the range of 1 to 1000.\n");
		
	}
	
	else{
		printf("Entered number is NOT within the range of 1 to 1000.\n");
	}
	
	return 0;
}

