/*
 Take no of rows from user
 1 
 2  2
 3  3  3
 4  4  4  4
 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the row::");
	scanf("%d",&row);

	for(int i =1 ;i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			
			printf("%d\t",i);
			
		}
		printf("\n");
	}
}
