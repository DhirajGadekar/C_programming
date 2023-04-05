/*
 3. Take no of rows from the user ROWS = 4
     1 2 3 4
       1 2 3
         1 2
           1
 */

#include<stdio.h>

void main() {
	
	int row,num;
	printf("Enter the Number row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {
		num = 1;
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
}
