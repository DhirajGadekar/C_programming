/*
 Take no of rows from user
 Row : 4
 
 4  3  2  1
 C  B  A
 2  1
 A

 */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the rows ::");
	scanf("%d",&row);

	char ch = 64 + row; 
	int num = row;
	for(int i = 1;i <= row;i++) {
		
		for(int j = row;j >= i;j-- ) {
			if(i % 2 == 1){
				printf("%d\t",num);
				ch--;
				num--;
			}else{
				printf("%c\t",ch);
				ch--;
				num--;
			}
		}
		ch = ch + row -i;
		num = num + row - i;
		printf("\n");
	}
}
