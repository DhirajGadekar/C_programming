/*
 1.WAP to create 1-D array of length n from user and also take value
   from user and print whole 1-D array.
 */

#include<stdio.h>

void main() {
	int size;

	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the Element of Array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	printf("Element of the array :\n");
	for(int i = 0;i < size;i++){
		printf("%d\n",*(arr + i));
	}
}

