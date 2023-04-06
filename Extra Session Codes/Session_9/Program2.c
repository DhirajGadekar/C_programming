/*
 2. Take no of rows from the user ROWS = 4
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3
	1 2
	1
 */

#include<stdio.h>

void main() {

	int row,col,num;
	printf("Enter the no of rows :");
	scanf("%d",&row);

	for(int i = 1;i <= (row * 2)-1;i++){
		num = 1;
		if(i<=row){
			col=i;
		}else{
			col=row*2-i;
		}

		for(int j = 1;j <= col;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
