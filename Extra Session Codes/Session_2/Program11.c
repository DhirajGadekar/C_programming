/*
 Take no of rows from users.
  ROW = 6
  1  2  3  4
  a  b  c  d
  #  #  #  #
  5  6  7  8
  e  f  g  h
  #  #  #  #  
  */

#include<stdio.h>

void main() {
	int row,num = 1;

	printf("Enter the no of rows :");
	scanf("%d",&row);
	
	int x = 1;
	char ch = 'a';

	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			if((i + 2)%3==0){
				printf("%d\t",x);
				x++;

			}else if((i +1)%3==0){
				printf("%c\t",ch);
				ch++;
			}else{
				printf("#\t");

			}		
		}
		
		printf("\n");
	}
}
