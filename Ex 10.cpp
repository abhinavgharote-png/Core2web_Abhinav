#include<stdio.h>

int main()
{
	int a1, a2, a3;
	
	printf("Enter values of three angles: \n");
	scanf("%d%d%d",&a1,&a2,&a3);
	
	if(a1==0 || a2==0 || a3==0){
		printf("None of the angles can have a value as zero.\n");
	}
		
	if(a1 + a2 + a3 == 180){
		printf("You can form a triangle with these values");
	}
	
	else{ printf("Criteria for triangle not fulfilled, you cannot form a triangle\n");
	}

	return 0;
	
}

