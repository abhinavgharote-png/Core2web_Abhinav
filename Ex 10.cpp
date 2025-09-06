#include<stdio.h>

int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	
	if(x%3==0){
		printf("Number is divisible by 3.");
	}
	
	else{
		printf("Number is not divisible by 3");
	}

	return 0;
	
}

