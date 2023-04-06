/*
 6. Take no of rows from the user ROWS = 4
	     d
           C C C
         b b b b b
       A A A A A A A
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
			
			if(i % 2 == 1){
				
				printf("%c ",ch);
			
			}else{
				
				printf("%c ",ch - 32);
			}
		}
		ch--;
		printf("\n");
	}	

		
}
