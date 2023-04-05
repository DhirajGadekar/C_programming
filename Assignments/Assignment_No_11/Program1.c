/*
 1. WAP to make an array of the table of Given Number
    Print the array using a pointer
 */

#include<stdio.h>

void main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int num,arr1[10];

	printf("Enter the num ::");
	scanf("%d",&num);
	
	for(int i = 0;i < 10;i++){
		arr1[i] = *(arr + i) * (num);
	}

	for(int i = 0; i < 10;i++){
		printf("%d\n",arr1[i]);
	}

}
