/*
 9. If possible take no of rows from the user
	2  5  10
	17 26 37
	50 65 82
 */
#include<stdio.h>

void main() {
        int row,col,x = 1;

        printf("Enter the row :");
        scanf("%d",&row);

        printf("Enter the Col :");
        scanf("%d",&col);

        for(int i = 1;i <= row;i++){
                for(int j = 1;j <= col;j++){
                        printf("%d\t",x * x + 1);
                        x++;
                }
                printf("\n");
        }
}


