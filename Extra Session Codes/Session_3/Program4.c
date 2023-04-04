/*
 Take no of rows from user
 1 
 1  2  
 1  2  3
 1  2  3  4
 */

#include<stdio.h>

void main() {
	int row,num;
	printf("Enter the row::");
	scanf("%d",&row);

	for(int i =1 ;i <= row;i++){
		num = 1;	
		for(int j = 1;j <= i;j++){
			
			printf("%d\t",num);
			num++;
			
		}
		printf("\n");
	}
}
