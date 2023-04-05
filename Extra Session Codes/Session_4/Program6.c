/*
 Take no of rows from user
 Row : 4
 
 a  b  c  d
 a  b  c
 a  b  
 a
  
 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the rows ::");
	scanf("%d",&row);
	char ch;
	for(int i = 1;i <= row;i++) {
		ch = 'a';
		for(int j = row;j >= i;j-- ) {
			
			printf("%c\t",ch);
			ch++;
			
		}
	
		printf("\n");
	}
}
