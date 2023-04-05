/*
 6. Take no of rows from the user ROWS = 5

                 5
	     5	 6
	 5   4   3
     5	 6   7   8
 5   4   3   2   1

 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the rows ::");
	scanf("%d",&row);

	int num;

	for(int i = 1;i <= row;i++){
		num = row;	
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
		}

		for(int j = 1;j <= i;j++){
			
			if(i % 2 == 1) {
				
				printf("%d\t",num);
				num--;
			}else{
				printf("%d\t",num);
				num++;
			}
		}
		printf("\n");

	}
}
