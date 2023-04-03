/*
  2. take no of rows from the user
	3 2 1
	c b a
	3 2 1
	c b a 
 */

#include<stdio.h>

void main(){
        int row;

        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){

		int x = 3;
		char  ch = 'c';

                for(int j = 1;j <= 3;j++){
                        if(i % 2 == 1){
                        	printf("%d\t",x);
				x--;
                        }else{
				printf("%c\t",ch);
				ch--;
			}
                }
		printf("\n");
        }
}
