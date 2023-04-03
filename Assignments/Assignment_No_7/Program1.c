/*
 . take no of rows from the user
1 2 3 4
1 3 5 7
1 4 7 10
1 5 9 13

 */

#include<stdio.h>

void main() {
	int row ,x;

	printf("Enter the row :");
	scanf("%d",&row);
	for(int i = 1;i <= row;i++){
		x = 1;
		for(int j = 1 ; j <= row;j++){
			printf("%d\t",x);
			x = x + i;
		}
		printf("\n");
	}
}
