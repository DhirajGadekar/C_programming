/*
 2D Array : Take 2D array from user and Print it.
 */

#include<stdio.h>

void main() {
	int row,col,sum = 0;
	
	printf("Enter the size Row ::");
	scanf("%d",&row);
	printf("Enter the size Col ::");
	scanf("%d",&col);

	int arr[row][col];
	
	printf("Enter the Element of Array ::\n");
	for(int i = 0; i < row;i++) {
		for(int j = 0; j < col ;j++) {
			scanf("%d ",&arr[i][j]);
			sum = sum + arr[i][j];
		}
		
	}

	for(int i = 0; i < row;i++) {
		for(int j = 0; j < col ;j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum of Array :: %d\n",sum);
}
