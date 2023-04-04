/*
 Take no of rows from users.
  ROW = 4
  d  d  d  d
  c  c  c  c
  b  b  b  b
  a  a  a  a
  */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the nu of rows :");
	scanf("%d",&row);
	char ch = 96 +row;
	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			printf("%c\t",ch);
			
		}
		ch--;
		printf("\n");
	}
}
