/*
 7. Take no of rows from the user ROWS = 4
     4 3 2 1
       3 2 1
         2 1
           1
 */

#include<stdio.h>

void main() {
	
	int row,num;
	printf("Enter the Number row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {
		num = 4;
		for(int sp = 1;sp < i;sp++){
			printf("\t");
			num--;
		}
		for(int j = row;j >= i;j--){
			printf("%d\t",num);
			num--;
		}
		printf("\n");
	}
}
