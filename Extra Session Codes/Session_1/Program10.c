/*
 Program 10:
 Take no of rows from user
 row = 3
 	1  3  5
	7  9  11
	13 15 17
 */

#include<stdio.h>

void main() {
	int row,x = 1;

	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= row;j++) {
			
			printf("%d\t",x);
			x += 2;
		}
		
		printf("\n");
	}
}
