/*
 Take no of rows from user
 Row : 4
 
  4  3  2  1
  4  3  2
  4  3
  4

 */

#include<stdio.h>

void main() {
	int row,num;

	printf("Enter the rows ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {
		num = row;
		for(int j = row;j >= i;j-- ) {
			printf("%d\t",num);
			num--;
		}
		printf("\n");
	}
}
