/*
 Take no of rows from user
 Row : 4
 
 4  3  2  1
 3  2  1
 2  1
 1
  
 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the rows ::");
	scanf("%d",&row);
	int num = row;
	for(int i = 1;i <= row;i++) {
		
		for(int j = row;j >= i;j-- ) {
			
			printf("%d\t",num);
			num--;
			
		}
		num = row - i;
		printf("\n");
	}
}
