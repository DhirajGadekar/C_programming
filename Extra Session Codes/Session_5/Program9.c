/*
 9.Take no of rows & col from the user  ROWS = 4

 	               4
		   3   6
	       2   4   6
	   1   2   3   4
 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the rows ::");
	scanf("%d",&row);
	int num = row;
	for(int i = 1;i <= row;i++){

		for(int sp = row - i;sp >= 1;sp--){
			printf(" \t");
		}
		for(int j = 1;j <= i;j++){
			printf("%d\t",num * j);
		}
		num--;
		printf("\n");
	}
}
