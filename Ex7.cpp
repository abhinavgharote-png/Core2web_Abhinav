#include<stdio.h>
int main()
{
	int num, count=0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	
	for(int i=2; i<10; i++){
		if(num%i==0){
			count++;
		}
	}
	printf("Count = %d", count);
	return 0;
	
}

