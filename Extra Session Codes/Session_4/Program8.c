/*
 Take no of rows from user
 Row : 5
 
 d  d  d  d
 C  C  C
 b  b
 A

 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the rows ::");
	scanf("%d",&row);
	char ch1 = 96 + row;
	char ch2 = 64 + row; 
	
	for(int i = 1;i <= row;i++) {
		
		for(int j = row;j >= i;j-- ) {
			
			if(i % 2 ==1) {
				printf("%c\t",ch1);

			}else{
				printf("%c\t",ch2);
				
			}			
		}
		ch1--;
		ch2--;
		printf("\n");
	}
}
