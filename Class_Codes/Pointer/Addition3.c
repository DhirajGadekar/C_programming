/*
 two addition is not allowed ,one pointer and interger or character addition is allowed.
 */

#include<stdio.h>

void main(){
	int x = 10;
	int y = 20;

	int *ptr1 = &x;
	int *ptr2 = &y;

	printf("%d\n",*ptr1 + *ptr2);
	printf("%p\n",ptr1 + ptr2);     //invalid operand binary +
}
