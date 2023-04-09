/*
 Relationship Between Array and Pointer :
 1.Array is a Only representation
 2.Array is internaly Pointer.
 */

#include<stdio.h>

void main () {
	
	int arr[5] = {10,20,30,40,50};

	int *ptr1 = arr;
	int (*ptr2)[5] = &arr;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

	printf("%d\n",arr[1]);
	printf("%d\n",*(arr + 1));
}

