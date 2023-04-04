/*
 Program 1:
 WAP to print the square of odd number between a given number
 Enter start = 10
 Enter end = 20
 121 169 225 289 361 
*/


#include<stdio.h>

void main() {
	int start,end;

	printf("Enter the start no:");
	scanf("%d",&start);
	
	printf("Enter the end no:");
	scanf("%d",&end);

	for(int i = start;i <= end;i++ ) {
		
		if(i % 2 != 0){
			printf("%d\n",i * i);
		}
	}
}
