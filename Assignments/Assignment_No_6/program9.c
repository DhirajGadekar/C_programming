/*
  9. take no of rows from the user
	0   3   8
	15  24  35
	48  63  80 
 */

#include<stdio.h>

void main(){
        int row,x = 1;

        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 3;j++){
                  	printf("%d\t",x * x - 1);
		   	x++;	
                }
		printf("\n");
        }
}
