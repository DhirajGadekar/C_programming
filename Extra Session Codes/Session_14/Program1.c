/*
 1. WAP to take size, integer array element from user in main function and print all even
    element in evenArr() function(passing Array to function).
 */

#include<stdio.h>

void evenArr(int *ptr,int arrSize){
	printf("Even element in the array : \n");
	for(int i = 0;i < arrSize;i++){
		if(*(ptr + i) % 2 == 0){
			printf("%d\n",*(ptr + i));
		}
	}
}
void main(){
	
	int size;
	printf("Enter the size array :");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the element of the array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	int arrSize = sizeof(arr)/sizeof(int);
	evenArr(arr,arrSize);
}
