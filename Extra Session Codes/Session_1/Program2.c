/*
 Program 2:
 Take range from user and print number of divisible by 3 and 7.
 */
#include<stdio.h>

void main() {
	int start,end;

	printf("Enter the start no:");
	scanf("%d",&start);
	
	printf("Enter the end no:");
	scanf("%d",&end);

	for(int i = start;i >= end;i-- ) {
		
		if(i % 3 == 0 && i % 7 == 0){
			printf("%d\n",i);
		}
	}
}
