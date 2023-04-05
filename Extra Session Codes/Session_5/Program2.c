/*
 2. Take no of rows from the user ROWS = 4

                 4
	     4	 3
         4   3   2
     4	 3   2   1

 */

#include<stdio.h>

void main() {
	int row,num;
	printf("Enter the rows ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++){
		num = 4;
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
		}

		for(int j = 1;j <= i;j++){
			
			printf("%d\t",num);
			num--;
		}
		printf("\n");

	}
}
