/*
 3.WAP that dynamically allocates a 2-D Array of integers, takes value from
the user, and prints it. [use malloc()]
rows=3
column=4
Draw a diagram on a notebook
 */

#include<stdio.h>
#include<stdlib.h>

void main() {

	int row,col;

	printf("Entert the size of row : ");
	scanf("%d",&row);

	printf("Enter thr size of col : ");
	scanf("%d",&col);

	int *ptr = (int*)malloc(sizeof(int)*row*col);
	
	printf("Enter the element of array : \n");
	for(int i = 0;i < row;i++){
		
		for(int j = 0;j < col;j++){
			scanf("%d" ,(ptr + (row * i)+ j));
		}
	}

	printf("Element of array : \n");
	for(int i = 0;i < row;i++){
		
		for(int j = 0;j < col;j++){
			
			printf("%d ",*(ptr + (row * i)+ j));
		}
		printf("\n");
	}
}
