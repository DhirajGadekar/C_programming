/*
 10. If possible take no of rows from the user
	D4 C3 B2 A1
	D4 C3 B2 A1
	D4 C3 B2 A1
	D4 C3 B2 A1
 */
#include<stdio.h>

void main() {
        int row,col;

        printf("Enter the row :");
        scanf("%d",&row);

        printf("Enter the Col :");
        scanf("%d",&col);

        for(int i = 1;i <= row;i++){
		char ch = 'D';

                for(int j = col;j >= 1;j--){
                     	printf("%c%d ",ch,j);
			ch--;
                        
                }
                printf("\n");
	}
}
