/*
3.take no of rows from the user
	4 4 4 4 
	3 3 3 3
	2 2 2 2
	1 1 1 1	 
 */


#include<stdio.h>

void main(){
        int row;

        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = row ; i >= 1 ;i--){
                for(int j = 1;j <= 4;j++){
                        printf("%d\t",i);		
                }
		printf("\n");
        }
}
