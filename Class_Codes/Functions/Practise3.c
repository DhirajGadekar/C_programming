/*
 Program 3:WAP to take an array from the user in the main
           function and print that array in another 
           Function take the array size from the user
 */
#include<stdio.h>

void fun(int *ptr,int arrsize) {
	printf("Print in Function :\n");
	for(int i = 0;i < arrsize;i++){
		printf("%d \n",*(ptr + i));
	}
	
}
void main() {
	int size;
	printf("Enter the size of array ::");
	scanf("%d",&size);
	int arr1[size];
	for(int i = 0;i < size;i++){
		scanf("%d",&arr1[i]);
	}

	int arrsize = sizeof(arr1) / sizeof(int);
	fun(arr1,arrsize);
}
