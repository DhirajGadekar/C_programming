/*
 Program 3:
 Take no of rows and col from user
 Row :3
 Col : 4
	1 2  3  4
	5 6  7  8
 	9 10 11 12
 */

#include<stdio.h>

void main() {
	int x = 1,row,col;

	printf("Enter no of col :");
	scanf("%d",&col);

	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= col;j++) {
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
