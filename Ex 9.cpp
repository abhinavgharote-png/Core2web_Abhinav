#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Enter  three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a*a==(b*b) + (c*c)) || (b*b==(a*a)+(c*c)) || (c*c==(a*a)+(b*b)) ) {
		printf("It is a Pythagorean triplet.\n");
	}
	
	else {
	printf("Its NOT a Pythagorean triplet.\n");
	}

	return 0;
	
}

