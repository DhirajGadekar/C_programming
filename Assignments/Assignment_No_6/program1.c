/*
 1. take no of rows from the user
	4 3 2 1
	5 4 3 2
	6 5 4 3
	7 6 5 4
 */

#include<stdio.h>

void main(){
	int row;
	int x = 4;
	printf("Enter row Number :");
	scanf("%d",&row);
	for(int i = 1 ; i <= row ;i++){
		
		for(int j = 1;j <= 4;j++){
			printf("%d\t",x--);
			
		}
		x += 5;
		printf("\n");
	}
}
