/*
 8. Take no of rows from the user ROWS = 4
	      D
 	    c D c
	  B c D c B
	a B c D c B a
 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the no of row :");
	scanf("%d",&row);
	
	
	for(int i= 1;i <= row;i++){
		
	        char ch = 65 + row - i;
		for(int sp = row;sp >= i;sp--){
			printf("  ");
		}
		for(int j = 1;j <= 2*i-1;j++){
			if(j < i){

				if((i + j) % 2 == 0){
				
					printf("%c ",ch++);
				
				}else{
					printf("%c ",ch+32);
					ch++;
				}
			}else{
				
				if((i + j) % 2 == 0){
				
					printf("%c ",ch--);
				
				}else{
					printf("%c ",ch+32);
					ch--;
				}
			}
		}

		printf("\n");
	}
}
