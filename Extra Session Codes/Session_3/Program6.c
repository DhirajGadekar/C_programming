/*
 Take no of rows from user
 4
 3  3
 2  2  2  
 1  1  1  1
 */

#include<stdio.h>

void main() {
	int row;
	
	printf("Enter the row::");
	scanf("%d",&row);
	int num  = row;
	for(int i =1 ;i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			
			printf("%d\t",num);
			
			
		}
		num--;
		printf("\n");
	}
}
