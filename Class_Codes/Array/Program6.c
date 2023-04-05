/*
2.WAP to create 2-D array of size given from user and assign that
  array to another array of same size and print the second array.
 */

#include<stdio.h>

void main() {
	
	int row,col;
	printf("Enter the row :");
	scanf("%d",&row);

	printf("Enter the col :");
	scanf("%d",&col);

	int arr[row][col];

	printf("Enter the element of Array :\n");
	for(int i = 0;i < row;i++){

		for(int j = 0;j < col;j++){
			
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("Element of the array ::\n");
	for(int i = 0;i < row;i++){
		printf("%d Row\n",i);
		for(int j = 0;j < col;j++){
			
			printf("%d ",*(*(arr + i)+j));
		}
		printf("\n");
	}
}
