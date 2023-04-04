/*
 Take no of rows from user
 1
 2  4
 3  6  9 
 4  8  12  16
 */

#include<stdio.h>

void main() {
	int row,num = 1;
	
	printf("Enter the row::");
	scanf("%d",&row);
	
	for(int i =1 ;i <= row;i++){
		num = 1;
		for(int j = 1;j <= i;j++){
			
			printf("%d\t",num * i);
			num++;	
				
		}
		printf("\n");
	}
}
