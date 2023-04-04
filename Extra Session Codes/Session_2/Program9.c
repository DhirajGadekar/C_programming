/*
 Take no of rows from users.
  ROW = 3
  A  b  C
  d  E  f
  G  h  J
   */
#include<stdio.h>

void main() {
	int row,x = 1;

	printf("Enter the nu of rows :");
	scanf("%d",&row);
	
	char ch1 = 98;
	char ch2 = 65;

	for(int i = 1;i <= row;i++) {

		for(int j = 1;j <= row;j++) {

			if(x % 2 == 1){
				printf("%c\t",ch2);
				x++;
				ch2+=2;

			}else{
				printf("%c\t",ch1);
				x++;
				ch1+=2;
				
			}
			
		}
		
		printf("\n");
	}
}
