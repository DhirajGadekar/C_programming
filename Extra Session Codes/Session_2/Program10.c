/*
 Take no of rows from users.
  ROW = 3
  1  3  5
  5  7  9
  9  11 13
  */

#include<stdio.h>

void main() {
	int row,num = 1;

	printf("Enter the no of rows :");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			printf("%d\t",num);
			num += 2;		
		}
		num -= 2;
		
		printf("\n");
	}
}
