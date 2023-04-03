/*
 6. take no of rows from the user
	= = = =
	$ $ $ $
	= = = =
	$ $ $ $
 */

#include<stdio.h>

void main(){
        int row;

        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 4;j++){
                        if(i % 2 == 1){
                        	printf("=  ");
                        }else{
				printf("$  ");
			}
                }
		printf("\n");
        }
}
