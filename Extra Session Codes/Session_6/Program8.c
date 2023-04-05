/*
 8. Take no of rows from the user ROWS = 4
     D D D D
       c c c
         B B
           a
 */

#include<stdio.h>

void main() {
	
	int row;
	printf("Enter the Number row ::");
	scanf("%d",&row);
	char ch = 64 + row;
	for(int i = 1;i <= row;i++) {
		
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			if(i % 2 == 1){
				printf("%c\t",ch);
				
			}else{
				printf("%c\t",ch + 32);
				
			}
		}
		ch--;
		printf("\n");
	}
}
