/*
 4. Take no of rows from the user ROWS = 4

                 1
	     5	 9
	 13  17  21
     25	 29  33  37

 */

#include<stdio.h>

void main() {
	int row,num = 1;
	printf("Enter the rows ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++){
		
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
		}

		for(int j = 1;j <= i;j++){
			
			printf("%d\t",num);
			num += row;
		}
		printf("\n");

	}
}
