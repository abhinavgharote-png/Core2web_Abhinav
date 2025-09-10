#include<stdio.h>


int main()
{
	int percent;
	printf("Enter the percentage: ");
	scanf("%d",&percent);
	
	if(percent>=85 && percent<=100){
		printf("First class with distiction.\n");
	}
	
	else if(percent>=75 && percent<85){
		printf("First class.\n");
	}
	
	else if(percent>=60 && percent<75){
		printf("Second class.\n");
	}

	else if(percent>=50 && percent<60){
		printf("Third class.\n");
	}
	
	else if(percent>0 && percent<50){
		printf("FAIL.\n");
	}
	
	else{
		printf("Invalid input");
	}

	return 0;
	
}

