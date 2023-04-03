/*
    10.Take no of rows from the user
	D1 C2 B3 A4
	e5 f4 g3 h2
	F3 E4 D5 C6
	g7 h6 i5 j4
 */

#include<stdio.h>

void main(){
        
        int row,x = 1;
	char ch1 = 64+row,ch2 = 97+row;

        printf("Enter the row :");
        scanf("%d",&row);

        for(int i = 1;i <= row ; i++){

                for(int j = 1; j <= row ; j++){
                	if(i % 2  == 1){
				printf("%c%d\t",ch1,x);
				x++;
				ch1--;
			
			}else{
				printf("%c%d\t",ch2,x);
				x--;
				ch2++;

			}
				
                }
                printf("\n");
        }
} 
