/*
 5. Take no of rows from the user ROWS = 4
	      d
	    c c c
	  b b b b b
	a a a a a a a
 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the row ::");
	scanf("%d",&row);
	char ch = 96 + row;

	for(int i = 1;i <= row;i++) {
		
		for(int sp = row;sp > i;sp--) {
			printf("  ");	
		}

		for(int j = 1; j <= 2 * i - 1 ;j++){
			
			printf("%c ",ch);
		}
		ch--;
		printf("\n");
	}	

		
}
