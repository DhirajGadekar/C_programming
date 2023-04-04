/*
 Take no of rows from user
 a
 b c
 d e f
 g h i j
 */

#include<stdio.h>

void main() {
	int row;
	char ch = 97;
	printf("Enter the row::");
	scanf("%d",&row);

	for(int i =1 ;i <= row;i++){
		
		for(int j = 1;j <= i;j++){
			
			printf("%c\t",ch);
			ch++;
			
		}
		printf("\n");
	}
}
