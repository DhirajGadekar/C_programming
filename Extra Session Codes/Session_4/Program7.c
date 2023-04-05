/*
 Take no of rows from user
 Row : 5
 
 1  2  3  4  5
 2  3  4  5
 3  4  5
 4  5
 5

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
		num = num - row + i; 
	
		printf("\n");
	}
}
