/*
 Take no of rows from users.
  ROW = 3
  9   64  7
  36  5   16
  3   4   1
  */

#include<stdio.h>

void main() {
	int row,x = 1;

	printf("Enter the nu of rows :");
	scanf("%d",&row);
	
	int y = row * row;

	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			if(x % 2 == 1){
				printf("%d\t",y);
				x++;
				y--;

			}else{
				printf("%d\t",y * y);
				x++;
				y--;
			}
			
		}
		
		printf("\n");
	}
}
