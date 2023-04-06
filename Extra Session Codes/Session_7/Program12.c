/*
 12. Take no of rows & col from the user ROWS =4
	      4
	    3 6 3
	  2 4 6 4 2
	1 2 3 4 3 2 1
 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the no of rows :");
	scanf("%d",&row);
	int num1 = row,num2;
	
	for(int i = 1;i <= row;i++){
		num2 = 1;
		for(int sp = row;sp >= i;sp--){
			printf("\t");
		}
		for(int j = 1;j <= 2 * i - 1;j++ ){
			if(j < i){
				printf("%d\t",num1 * num2);
				num2++;
				
			}else{
				printf("%d\t",num1 * num2 );
				num2--;
			
			}
		}
		num1--;
		printf("\n");
	}
}
