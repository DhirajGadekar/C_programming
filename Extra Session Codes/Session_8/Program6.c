/*
6. Take no of rows from the user ROWS = 4
	1 2 3 4 3 2 1
	  1 2 3 2 1
	    1 2 1
	      1 
 */

#include<stdio.h>

void main() {

	int row,num1,num2;
	printf("Enter the no of row :");
	scanf("%d",&row);
	
	num1 = row;
	for(int i = 1;i <= row;i++){
		num2 = 1;
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}

		for(int j = 2*row-2*i+1; j >= 1;j--){
			
			if(j > num1){
				printf("%d\t",num2);
				num2++;
			}else{
				printf("%d\t",num2);
				num2--;
			}
		}
		num1--;
		printf("\n");
	}

}
