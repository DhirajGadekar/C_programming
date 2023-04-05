/*
 Take no of rows from user
 Row : 4
 
  1  2  3  4
  4  5  6  
  6  7  
  7

 */

#include<stdio.h>

void main() {
	int row,num = 1;

	printf("Enter the rows ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {
		
		for(int j = row;j >= i;j-- ) {
			printf("%d\t",num);
			num++;
		}
		num = num - 1;
		printf("\n");
	}
}
