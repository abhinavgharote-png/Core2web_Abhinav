#include<stdio.h>


int main()
{
	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	char arr[size];
	
	printf("Enter the elements of array:\n");
	
	for(int i=0; i<size; i++){
		scanf(" %c",&arr[i]);
	}
	
	
	for(int i=0; i<size; i++){
		if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
			printf("%c \t%d\n",arr[i],i);
		}
	}
	
	
	return 0;
	
}

