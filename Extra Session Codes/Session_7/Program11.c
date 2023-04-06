/*
 11. Take no of rows from the user ROWS = 4
	      1
	    A b A
	  1 2 3 2 1
	A b C d C b A
 */

#include<stdio.h>

void main() {

	int row,num;
	printf("Enter the no of row :");
	scanf("%d",&row);
	char ch;
	for(int i = 1;i <= row;i++){
		num = 1;
		ch = 65;
		for(int sp = row;sp >= i;sp--){
			printf("\t");
		}
		for(int j = 1;j <= 2 * i -1;j++){
			if(i % 2== 1){
				if(j < i){
					printf("%d\t",num);
					num++;
				}else{
					printf("%d\t",num);
					num--;
				}
			}else{	
				if((i + j) % 2 == 1){
					if(j < i){
						printf("%c\t",ch);
						ch++;
					}else{
						printf("%c\t",ch);
						ch--;
					}
				}else{

					if(j < i){
						printf("%c\t",ch + 32);
						ch++;
					}else{
						printf("%c\t",ch + 32);
						ch--;
					}
				}
			}
		}
		printf("\n");
	}
}
