/*
 Null and Wild Pointer :
 1.Null pointer address is nil.
 */

#include<stdio.h>

void main() {
	
	int x = 10;

	int *ptr;  // Wild Pointer 

	int *ptr1 = NULL;  // NULL Pointer :nil
	
	printf("%d\n",*ptr);
	printf("%d\n",*ptr1);    //Segmentation Fault (Core Dumped)
}
