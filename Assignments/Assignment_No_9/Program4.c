/*
 4. WAP to the array elements in reverse order
    Take array size and array elements from the user
 */

#include<stdio.h>

void main() {
	
	int size;

	printf("Enter the size of array ::");
	scanf("%d",&size);

	int arr[size];

	printf("Enter the array of Element ::\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Array element in reverse order ::\n");
	for(int i = size-1;i >= 0;i--){
		printf("%d\n",arr[i]);
	}
}
