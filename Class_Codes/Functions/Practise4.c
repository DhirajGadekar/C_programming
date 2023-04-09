#include<stdio.h>
int fun1(int size){
	int arrsize = size;
	return arrsize;
}
int* fun() {
	int size;
	printf("Enter the size of array ::");
	scanf("%d",&size);
	int arr[size];
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[size]);
	}
	int arrsize = fun1(size);
	return arr;
}

void main() {
	int* ptr = fun();
		
}
