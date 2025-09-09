#include<stdio.h>
int main()
{
	char ch;
	int ASCII_value;
	
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	ASCII_value = *(&ch);
	
	if(ASCII_value>=97 && ASCII_value<=122){
		printf("%c is lowercase.\n",ch);
	}
		
	else if(ASCII_value>=65 && ASCII_value<=90){
		printf("%c is UPPERCASE.\n",ch);
	}
	else{
		printf("Invalid character!");
	}

	return 0;
	
}

