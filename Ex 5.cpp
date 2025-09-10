#include<stdio.h>

int main()
{
	int units, bill;
	int r1=5 , r2=7, r3=10;
	
	printf("Enter the number of units consumed: ");
	scanf("%d",&units);
	
	if(units>0 && units<=100){
		bill=units*r1;
	}
	
	else if(units>100 && units<=300){
		bill=(100*r1)+((units-100)*r2);
	}
	
	else if(units>300){
		bill=(100*r1)+(200*r2)+((units-300)*r3);
	}
	
	else{
		printf("Enter valid input.\n");
	}
	
	printf("The total electricty bill is %d",bill);
	
	return 0;
	
}

