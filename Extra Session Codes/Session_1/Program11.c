/*
 Program 11:
 Take no of rows from user
 row = 4
 	1  2  3  4
	a  b  c  d
	5  6  7  8 
	e  f  g  h
 */

#include<stdio.h>

void main() {
	int row,x = 1,ch = 97;

	printf("Enter the row:");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++ ) {
		
		for(int j = 1;j <= row;j++) {
			
			if(i % 2 != 0){
				printf("%d\t",x);
				x++;
			}
			else{
				printf("%c\t",ch);
				ch++;
			}
		}
		
		printf("\n");
	}
}
