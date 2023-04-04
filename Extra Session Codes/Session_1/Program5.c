/*
 Program 5:
 Take no of rows from user
 row = 3
 	a b c
	d e f
	g h i
 */

#include<stdio.h>

void main() {
	int row,ch = 97;
	
	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= row;j++) {
			
			printf("%c\t",ch);
			ch++;
			
		}
		printf("\n");
	}
}
