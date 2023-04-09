/*
 1. WAP and take one integer pointer, two integer pointer to an pointer and store address in it, Print that Data by
     dereferencing all three Pointer.
 */

#include<stdio.h>

void main() {
	
	int num = 5;
	int *ptr1 = &num;
	int *ptr2 = ptr1;
	int *ptr3 = ptr2;

	int **ptr4 = &ptr1;
	int **ptr5 = &ptr2;
	int **ptr6 = &ptr3;

	int ***ptr7 = &ptr4;
	int ***ptr8 = &ptr5;
	int ***ptr9 = &ptr6;
	
	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	printf("%d\n",*ptr3);
	
	printf("%d\n",**ptr4);
	printf("%d\n",**ptr5);
	printf("%d\n",**ptr6);
	
	printf("%d\n",***ptr7);
	printf("%d\n",***ptr8);
	printf("%d\n",***ptr9);
}
