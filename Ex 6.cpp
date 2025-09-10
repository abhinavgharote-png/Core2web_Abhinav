#include<stdio.h>

int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d",&marks);
	
	if(marks>=85){
		printf("Medical.\n");
	}
	
	else if(marks<85 && marks>=75){
		printf("Engineering.\n");
	}
	
	else if(marks<75&& marks>=65){
		printf("Pharmacy.\n");
	}
	
	else if(marks<65){
		printf("FAIL.\n");
	}
	return 0;
	
}

