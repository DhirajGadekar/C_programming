#include<stdio.h>

void printArr(int *ptr,int arrSize){
	for(int i = 0;i < arrSize;i++){
		printf("%d\n",*(ptr + i));		
	}
}
void main() {
	int arr[] = {1,2,3,4,5};
	int arrSize = sizeof(arr) / sizeof(int);
	printArr(arr,arrSize);
}
