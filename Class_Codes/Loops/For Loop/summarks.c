// sum of the 5 subject 


#include<stdio.h>

void main() {
	
	int marks;
	int sum = 0;

	for(int i = 1;i <= 5;i++){
		
		printf("Enter the marks of %d subject : ",i);
		scanf("%d",&marks);

		sum = sum + marks;
	}
	printf("Total Subject Marks = %d\n",sum);
}
