/*
 Take no of rows from users.
  ROW = 4
  D  D  D  D
  C  C  C  C
  B  B  B  B
  A  A  A  A
  */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the nu of rows :");
	scanf("%d",&row);
	char ch = 64 +row;
	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			printf("%c\t",ch);
			
		}
		ch--;
		printf("\n");
	}
}
