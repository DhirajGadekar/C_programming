/*
 Program 4:
 Take no of rows from user
 row = 3
 	* * *
 	* * *
 	* * *
 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= row;j++) {
			
			printf("*\t");
			
		}
		printf("\n");
	}
}
