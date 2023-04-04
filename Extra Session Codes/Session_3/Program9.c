/*
 Take no of rows from user
 4
 8  12
 16 20  24 
 */

#include<stdio.h>

void main() {
	int row,num = 1;
	
	printf("Enter the row::");
	scanf("%d",&row);
	
	for(int i =1 ;i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			
			printf("%d  ",num * row);
			num++;	
				
		}
		printf("\n");
	}
}
