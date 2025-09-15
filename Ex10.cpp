#include<stdio.h>

int main()
{
	int num=1, count=0;
	
	for(num; num<=100; num++){
		if(num%2==0 && num%5==0){
			count++;
		}
	}
	
	printf("Count = %d", count);

	return 0;
	
}

