/*
 8. If possible take no of rows from the user
	1  3  5
	7  9  11
	13 15 17
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
                	printf("%d\t",x);
			x += 2;
                }
                printf("\n");
        }
}

