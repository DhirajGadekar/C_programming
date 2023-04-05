/*
4.WAP that dynamically allocates a 3-D Array of integers, takes value from
the user, and prints it. [use malloc()]
Plane = 2
rows=2
column=3

 */

#include<stdio.h>
#include<stdlib.h>

void main() {

	int plane,row,col;

	printf("Enter the no of planes : ");
	scanf("%d",&plane);
	printf("Enter the no of row : ");
	scanf("%d",&row);
	printf("Enter the no of col : ");
	scanf("%d",&col);

	int *ptr = (int*)malloc(sizeof(int));

	printf("Enter the element of array : \n");

	for(int i = 0;i < plane;i++){
		
		for(int j = 0;j < row;j++){
			
			for(int k = 0;k < col;k++){
				
				scanf("%d",(ptr + (i*row*col)+(j*row)+k));
			}
		}
	}
	printf("Elements of array : \n");

	for(int i = 0;i < plane;i++){
		printf("Plane %d\n",i);
		for(int j = 0;j < row;j++){
			
			for(int k = 0;k < col;k++){
				
				printf("%d ",*(ptr + (i*row*col)+(j*row)+k));
				
			}
			printf("\n");
		}

	}
}
