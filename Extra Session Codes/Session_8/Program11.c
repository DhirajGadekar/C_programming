/*
11. Take no of rows from the user ROWS = 4
	7 6 5 4 3 2 1
	  5 4 3 2 1
	    3 2 1
	      1 
 */

#include<stdio.h>

void main() {

	int row,num;
	printf("Enter the no of row :");
	scanf("%d",&row);
	num = (row * 2) - 1;
	for(int i = 1;i <= row;i++){	
	
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}

		for(int j = 2*row-2*i+1; j >= 1;j--){
			printf("%d\t",num);
			num--;
		}
		num = (row * 2) - (i + i + 1);
		printf("\n");
	}

}
