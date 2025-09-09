#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number: \n");
	scanf("%d",&a);
	
	if(a%3==0 && a%7==0) {
		
	printf("%d is divisible by both 3 and 7.\n",a);
	}
	
	else{
		printf("%d is not divisible by both 3 and 7.\n",a);
	}

	return 0;
	
}

