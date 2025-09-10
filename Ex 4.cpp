#include<stdio.h>

int main()
{
	char ch;
	int ascii_val;
	printf("Enter an alphabet: ");
	scanf("%c",&ch);
	
	ascii_val= ch;
	
	if((ascii_val>=65 && ascii_val<=90) || (ascii_val>=97 && ascii_val<=122)) {
		
		if(ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' ||ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ) {
			
			printf("Vowel.\n");
		}
		else{
			printf("Consonant.\n");
		}
		
		
		if(ascii_val>=65 && ascii_val<=90) {
			
			printf("UPPERCASE\n");
		}
		
		else{
			printf("lowercase\n");
		}
		
	}
	
	else{
		printf("Invalid input!\n");
	}
	
	return 0;	
}
	
	


