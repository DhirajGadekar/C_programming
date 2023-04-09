#include<stdio.h>

void print2Darr(int (*ptr)[],int Size){
	
	for(int i = 0;i < Size;i++) {
		printf("%d\n",*(*ptr + i));
	}
}

void main() {
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int arrSize = sizeof(arr) / sizeof(int);

	print2Darr(&arr,arrSize);
	
}
