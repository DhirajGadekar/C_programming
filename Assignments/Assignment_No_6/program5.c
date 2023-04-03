/*
 5. take no of rows from the user
	D C B A
	e d c b
	F E D C
	g f e d
 */

#include<stdio.h>

void main(){
        int row;
	char ch1 = 'D',ch2 = 'd';
        printf("Enter row Number :");
        scanf("%d",&row);
        for(int i = 1 ; i <= row ;i++){
                for(int j = 1;j <= 4;j++){
                        if(i % 2 == 1){
                        	printf("%c\t",ch1);
			
                        }else{
				printf("%c\t",ch2);
				
			}
			ch1--;
			ch2--;
                }
		ch1 += 5;
		ch2 += 5;
		printf("\n");
        }
}
