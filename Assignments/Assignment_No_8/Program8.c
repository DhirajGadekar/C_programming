/*
 8. take no of rows from the user
0
1 1
2 3 5
8 13 21 34
 */

#include<stdio.h>

void main(){
	int row,x = 0, y = 1;

	printf("Enter the row ::");
	scanf("%d",&row);

	for(int i = 1; i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			printf("%d ",x);
			y = x + y;
			x = y - x;
		}
		printf("\n");
	}
}
