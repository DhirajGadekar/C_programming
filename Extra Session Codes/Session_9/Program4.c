/*
 4. Take no of rows from the user ROWS = 4
	4
	3 3
	2 2 2
	1 1 1 1
	2 2 2
	3 3
	4
 */

#include<stdio.h>

void main() {

	int row,col,num;
	printf("Enter the no of rows :");
	scanf("%d",&row);
	
	for(int i = 1;i <= (row * 2)-1;i++){
		num--;
		if(i <= row){
			col=i;
			num = row+1;
			num = num-i;
		}else{
			col=row*2-i;
			num++;
			num = num + 1;
		}

		for(int j = 1;j <= col;j++){
			printf("%d",num);	
		}
		
		printf("\n");
	}
}
