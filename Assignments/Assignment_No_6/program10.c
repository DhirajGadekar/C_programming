/*
 10. take no of rows from the user
	D4 C3 B2 A1
	A1 B2 C3 D4
	D4 C3 B2 A1
	A1 B2 C3 D4
 */

#include<stdio.h>

void main(){
        int row,x = 4;
	char ch = 'D';
        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 4;j++){
                        if(i % 2 == 1){
                        	printf("%c%d\t",ch,x);
				ch--;
				x--;
                        }
			else{
				printf("%c%d\t",++ch,++x);
			}
                }
		printf("\n");
        }
}
