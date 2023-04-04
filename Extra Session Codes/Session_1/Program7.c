/*
 Program 7:
 Take no of rows from user
 row = 4
 	4  4  4  4
	3  3  3  3
	2  2  2  2
	1  1  1  1
 */

#include<stdio.h>

void main() {
	int row;
	
	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = row;i >= 1;i-- ) {
		
		for(int j = 1;j <= row;j++) {
			
			printf("%d\t",i);
			
		}
		printf("\n");
	}
}
