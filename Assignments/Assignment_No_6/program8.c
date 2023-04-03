/*
  8. take no of rows from the user
	18 16 14
	12 10 8
	6  4  2 
 */

#include<stdio.h>

void main(){
        int row,x = 9;

        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 3;j++){
                    	
			printf("%d\t",x * 2);
			x--;
                }
		printf("\n");
        }
}
