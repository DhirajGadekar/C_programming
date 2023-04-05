/*
 Take no of rows from user
 Row : 4
 *  *  *  *
 *  *  *
 *  *
 *
  
 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the rows ::");
	scanf("%d",&row);
	
	for(int i = 1;i <= row;i++) {
		
		for(int j = row;j >= i;j-- ) {
			
			printf("*\t");
			
		}
		printf("\n");
	}
}
