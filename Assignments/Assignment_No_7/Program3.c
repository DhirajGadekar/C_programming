/*
 3.take no of rows from the user
	4 a 3 b
	4 a 3 b
	4 a 3 b
	4 a 3 b
 */

#include<stdio.h>

void main(){
        
        int row;

        printf("Enter the row :");
        scanf("%d",&row);

        for(int i = 1;i <= row ; i++){
		char ch = 'a';
		int x = 4;
                for(int j = 1; j <= row ; j++){
        		if(j % 2 ==1){
				printf("%d\t",x);
				x--;
				 
			}else{
				printf("%c\t",ch);
				ch++;
				
			}	
                }
                printf("\n");
        }
} 
