/*
 4. take no of rows from the user
	a B c D
	b C d E
	c D e F
	d E f G
 */

#include<stdio.h>

void main(){
        
        int row;
	char ch1,ch2;

        printf("Enter the row :");
        scanf("%d",&row);

	printf("Enter the Uppercase Char :");
        scanf(" %c",&ch1);

	printf("Enter the LowerCase Char :");
        scanf(" %c",&ch2);

        for(int i = 1;i <= row ; i++){

                for(int j = 1; j <= row ; j++){
                	if(j % 2 == 1){
				printf("%c\t",ch2);
				ch2 += 2;	
			}else{
				printf("%c\t",ch1);
				ch1 += 2;
			}
                }
		ch1 = ch1 - 3;
		ch2 = ch2 - 3;
                printf("\n");
        }
} 
