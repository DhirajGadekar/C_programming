/*
 4. take no of rows from the user
	I H G
	F E D
	C B A
 */

#include<stdio.h>

void main(){
        int row;
	char ch = 'I';
        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 3;j++){
                        printf("%c\t",ch);
			ch--;
                }
		printf("\n");
        }
}
