/*
 Take no of rows from user
 1 
 2  3
 4  5  6
 7  8  9 10
 */

#include<stdio.h>

void main() {
	int row,num = 1;
	printf("Enter the row::");
	scanf("%d",&row);

	for(int i =1 ;i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			
			printf("%d\t",num);
			num++;
		
		}
		printf("\n");
	}
}
