/*
2. Take no of rows from the user ROWS = 3
	1 2 3 4 5
	  6 7 8
	    9 
 */

#include<stdio.h>

void main() {

	int row;
	printf("Enter the no of row :");
	scanf("%d",&row);
	int num = 1;
	for(int i = 1;i <= row;i++){
		
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}

		for(int j = 2*row-2*i+1; j >= 1;j--){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}

}
