/*
 Program 9:
 Take no of rows from user
 row = 3
 	A  A  A
	B  B  B
	C  C  C
 */

#include<stdio.h>

void main() {
	int row,ch = 65;

	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= row;j++) {
			
			printf("%c\t",ch);
			
		}
		ch++;
		printf("\n");
	}
}
