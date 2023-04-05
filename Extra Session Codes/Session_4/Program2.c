/*
 Take no of rows from user
 Row : 4
 1  2  3  4
 1  2  3
 1  2 
 1 
 */

#include<stdio.h>

void main() {
	int row,num;

	printf("Enter the rows ::");
	scanf("%d",&row);
	
	for(int i = 1;i <= row;i++) {
		num = 1;
		for(int j = row;j >= i;j-- ) {
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}
