//Program to write an output for the fixed statements

#include<stdio.h>

int main()
{
	int x=19;
	int ans=0;
	ans = x++ + --x - x++;
	printf("%d\n",ans);
	
	ans = --x + x-- - x++ + ++x;
	printf("%d\n",ans);

	return 0;
}

