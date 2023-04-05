/*
 3. Take no of rows from the user ROWS = 4

                 d
	     c	 c
	 b   b   b
     a	 a   a   a

 */

#include<stdio.h>

void main() {
	int row,num;
	printf("Enter the rows ::");
	scanf("%d",&row);
	
	char ch = 96 + row;
	for(int i = 1;i <= row;i++){
		
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
		}

		for(int j = 1;j <= i;j++){
			
			printf("%c\t",ch);
		
		}
		ch--;
		printf("\n");

	}
}
