#include<stdio.h>
int main()
{
	int count=0;
	
	for(int i=2; i<=200; i++){
		if(i%2==0){
			count++;
		}
	}
		
	printf("Count = %d",count);

	return 0;
	

}

