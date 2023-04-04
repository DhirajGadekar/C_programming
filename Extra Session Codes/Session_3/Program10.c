/*
 Take no of rows from user
 10
 I   H
 7   6   5
 D   C   B   A
 */

#include<stdio.h>

void main() {
	int row;
	int num = 10;
	char ch = 'J';
	
	printf("Enter the row::");
	scanf("%d",&row);
	
	for(int i =1 ;i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			
			if(i % 2 == 1) {
				printf("%d\t",num);
				num--;
				ch--;
			
			}else{
				printf("%c\t",ch);
				ch--;
				num--;
			}
				
		}
		printf("\n");
	}
}
