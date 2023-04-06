/*
10. Take no of rows from the user ROWS = 4
	* * * # * * *
	  * * # * *
	    * # *
	      # 
 */

#include<stdio.h>

void main() {

	int row;
	printf("Enter the no of row :");
	scanf("%d",&row);
	int num = row;
	for(int i = 1;i <= row;i++){
		
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}

		for(int j = 2*row-2*i+1; j >= 1;j--){
			if( j == num){
				printf("#\t");
			}else{
				printf("*\t");
			}
		}
		num--;
		printf("\n");
	}

}
