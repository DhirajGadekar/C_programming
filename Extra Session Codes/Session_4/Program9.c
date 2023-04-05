/*
 Take no of rows from user
 Row : 5
 
 D  C  B  A
 C  B  A
 B  A
 A

 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the rows ::");
	scanf("%d",&row);

	char ch = 64 + row; 
	
	for(int i = 1;i <= row;i++) {
		
		for(int j = row;j >= i;j-- ) {
			
			printf("%c\t",ch);
			ch--;
		}
		ch = ch + row -i;
		printf("\n");
	}
}
