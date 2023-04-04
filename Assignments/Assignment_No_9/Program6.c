/*
 6. WAP to swap values of two numbers using a pointer.
  (Hint: Use de-referencing of pointers)
  x = 10;
  y = 20;
 */

#include<stdio.h>

void main(){
	
	int x = 10,y = 20,z = 0;

	int *ptr1 = &x;
	int *ptr2 = &y;
	int *ptr3 = &z;

	z = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = z;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);

}
