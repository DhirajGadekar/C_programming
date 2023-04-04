/*
 Program 1 : WAP to print the odd number as it is and cube of even number between a given range from the user
 */

#include<stdio.h>

void main() {
	int start,end;

	printf("Enter the start no :");
	scanf("%d",&start);
	printf("Enter the end no :");
	scanf("%d",&end);

	for(int i = start;i <= end;i++) {
		if(i % 2 == 0){
			printf("%d\n",i*i*i);

		}else{
			printf("%d\n",i);
		}
	}
}
