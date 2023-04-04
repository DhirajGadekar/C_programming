/*
 10. take no of rows from the user
	D D D D
	  C C C
	    B B
	      A
 */

#include<stdio.h>

void main(){
	char ch = 'D';
	int row;
	printf("Enter the value of row:");
	scanf("%d",&row);

	for(int i = 1;i <= row; i++){
		for(int sp = 1;sp < i ;sp++){
			printf("  ");
		} 
		for(int j = row;j >= i;j--){
			printf("%c ",ch);
			
		}
		ch--;
		printf("\n");
	}
}
