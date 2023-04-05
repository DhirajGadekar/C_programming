/*
 4. Take no of rows from the user ROWS = 4
     d d d d
       c c c
         b b
           a
 */

#include<stdio.h>

void main() {
	
	int row;
	printf("Enter the Number row ::");
	scanf("%d",&row);
	char ch = 96 + row;
	for(int i = 1;i <= row;i++) {
		
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			printf("%c\t",ch);
		}
		ch--;
		printf("\n");
	}
}
