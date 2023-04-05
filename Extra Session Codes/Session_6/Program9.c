/*
 9. Take no of rows from the user ROWS = 4
    100  9   64 7
         36  5  16
             3  4
                1
 */

#include<stdio.h>

void main() {
	
	int row;
	printf("Enter the Number row ::");
	scanf("%d",&row);
	
	int num = (row*(row+1))/2;

	for(int i = 1;i <= row;i++) {
		
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			if(num % 2 == 0){
				printf("%d\t",num*num);
				num--;
			}
			else{
				printf("%d\t",num);
				num--;
			}
		}		
		printf("\n");
	}
}
