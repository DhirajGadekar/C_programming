/*
 5. Take no of rows from the user ROWS = 4
	3 
	2 3 
	1 2 3 
	0 1 2 3 
	1 2 3 
	2 3 
	3
 */

#include<stdio.h>

void main() {

	int row,col;
	printf("Enter the no of rows :");
	scanf("%d",&row);

	for(int i = 1;i <= (row * 2)-1;i++){
		int num;
		if(i<=row){
			col=i;
			num = row - i;
		}else{
			col=row*2-i;
			num = i - row;
		}

		for(int j = 1;j <= col;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
