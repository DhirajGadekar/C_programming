/*
 Program 8:
 Take no of rows from user
 row = 3
 	9  8  7 
	6  5  4  
	3  2  1
 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the row:");
	scanf("%d",&row);

	int num = row*row;

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= row;j++) {
			
			printf("%d\t",num);
			num--;
			
		}
		printf("\n");
	}
}
