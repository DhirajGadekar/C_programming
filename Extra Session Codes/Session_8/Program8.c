/*
8. Take no of rows from the user ROWS = 4
	D C B A B C D
	  c b a b c
 	    B A B
	      a 
 */

#include<stdio.h>

void main() {

	int row,num;
	printf("Enter the no of row :");
	scanf("%d",&row);
	char ch;
	num = row;
	for(int i = 1;i <= row;i++){
		ch = 65 + row - i;
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}

		for(int j = 2*row-2*i+1; j >= 1;j--){
			if(i % 2 == 1){
				if( j > num){
					printf("%c\t",ch);
					ch--;
				}else{
					printf("%c\t",ch);
					ch++;
				}
			}else{

				if( j > num){
					printf("%c\t",ch + 32);
					ch--;
				}else{
					printf("%c\t",ch + 32);
					ch++;
				}
			}
		}
		num--;
		printf("\n");
	}

}
