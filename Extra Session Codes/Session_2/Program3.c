/*
 Take no of rows from users.
  ROW = 3
  1  4  7
  10 13 16
  19 22 25
  */

#include<stdio.h>

void main() {
	int row,num = 1;

	printf("Enter the nu of rows :");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			printf("%d\t",num);
			num += 3;
		}
		printf("\n");
	}
}
