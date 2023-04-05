/*
 Sum of all array element.
 */

#include<stdio.h>

void main() {

	int size,sum = 0;
	printf("Enter the size of array :");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the array element :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i < size;i++){
		sum = sum + arr[i];
	}
	printf("Sum of the all array element = %d\n",sum);
}
