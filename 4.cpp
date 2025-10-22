#include<stdio.h>

int main()
{
	int N, ID, found=0;
	printf("Enter total no. of students: ");
	scanf("%d",&N);
	
	int class_record[N];
	
	printf("Enter the IDs of the students: ");
	for(int i=0; i<N; i++){
	scanf("%d",&class_record[i]);
	}
	
	printf("Enter a ID: ");
	scanf("%d",&ID);
	
	for(int i=0; i<N; i++){
	if(ID==class_record[i]){
		printf("ID %d found at index no. %d\n",ID, i);
		found=1;
		break;
		}		
			
	}

	if(!found){
		printf("ID not found!");
	}
	
	return 0;
	
}

