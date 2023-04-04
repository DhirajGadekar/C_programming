/*
 Take no of rows from users.
  ROW = 3
  a  B  c
  d  E  f
  g  H  i
  */

#include<stdio.h>

void main() {
	int row;

	printf("Enter the nu of rows :");
	scanf("%d",&row);
	char ch1 = 96;
	char ch2 = 64;
	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			if(j % 2 == 1){
				printf("%c\t",ch1 + j);
				

			}else{
				printf("%c\t",ch2 + j);
			
			}
			
		}
		ch1 = ch1 + row;
		ch2 = ch2 + row;
		printf("\n");
	}
}
