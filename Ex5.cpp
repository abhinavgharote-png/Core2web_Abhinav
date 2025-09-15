#include<stdio.h>

int main()
{
	int l1=96, l2=24;
	
	for(l1; l1>=l2; l1--){
		if(l1%2==0){
			printf("%d\n",l1);
		}
	}

	return 0;
	
}

