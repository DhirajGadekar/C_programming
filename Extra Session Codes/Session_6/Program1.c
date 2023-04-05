/*
 1. Take no of rows from the user ROWS = 3
     * * * *
       * * *
         * *
           *
 */

#include<stdio.h>

void main() {
	
	int row;
	printf("Enter the Number row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {
		
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			printf("*\t");
		}
		printf("\n");
	}
}
