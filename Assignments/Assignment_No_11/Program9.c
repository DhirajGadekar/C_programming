/*
 9. Create a 2D array and take the input of elements from 
    the user & Print using a pointer.
    Draw a correct diagram and Write the output
 */

#include<stdio.h>

void main() {
	int row,col;

	printf("Enter the size of row :");
	scanf("%d",&row);
	
	printf("Enter the size of col :");
	scanf("%d",&col);

	int arr[row][col];
	
	printf("Enter the element of array :\n");

	for(int i = 0;i < row;i++){
		
		for(int j = 0;j < col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Element of Array ::\n");
	for(int i = 0;i < row;i++){
		
		for(int j = 0;j < col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

}
