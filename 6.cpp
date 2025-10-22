/* Write a program to create an array of heights of students where you have to check for the height must not 
be greater than 6 ft and must not be less 5.5 ft. Store the appropriate heights and print it */

#include<stdio.h>

#define MAX_STUDENTS 50

int main()
{  float heights[MAX_STUDENTS];
   int num_students;
   
   printf("Enter the no. of students in class(max. %d): ",MAX_STUDENTS);
   scanf("%d",&num_students);
   
   if(num_students <= 0 || num_students > 50){
   	printf("Invalid number of students. Must be between 1 and %d.\n", MAX_STUDENTS);
   	return 1;
   }
   
   for(int i=0; i<num_students; i++){
   	
   	float height;
   	
   	while(1){
   		printf("Enter the height of student %d: ",i+1);
   		scanf("%f",&height);
   		
   		if(height >= 5.5 && height <= 6){
   			heights[i]=height;
			   break;   			
		   }
		else{
			printf("Invalid height! Height must be between 5.5 and 6. Please re-enter.\n");
		}

	}	
   	
   }
   
   for(int i=0; i<num_students; i++){
   	printf("Height of student %d: %0.1f\n",i+1,heights[i]);
   }
   
return 0;
	
}

