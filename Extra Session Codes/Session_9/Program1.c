/*
 1. Take no of rows from the user ROWS = 4
	*
	* *
	* * *
	* * * *
	* * *
	* *
	*
 */

#include<stdio.h>

void main() {

	int row,col;
	printf("Enter the no of rows :");
	scanf("%d",&row);

	for(int i = 1;i <= (row * 2)-1;i++){
		if(i<=row){
			col=i;
		}else{
			col=row*2-i;
		}

		for(int j = 1;j <= col;j++){
			printf("* ");
		}
		printf("\n");
	}
}
