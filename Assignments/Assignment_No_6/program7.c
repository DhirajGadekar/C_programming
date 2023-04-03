/*
 7. take no of rows from the user
	1   2   3   4
	25  36  49  64
	9   10  11  12
	169 196 225 256
 */

#include<stdio.h>

void main(){
        int row,x = 1;

        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 4;j++){
                        if(i % 2 == 1){
                        	printf("%d\t",x);
				x++;
                        }
			else{
				printf("%d\t",x * x);
				x++;
			}
                }
		printf("\n");
        }
}
