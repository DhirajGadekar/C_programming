/*
   Dangling Pointer :
*/

#include<stdio.h>
int a = 10;
int b;
int *iptr = NULL;

void fun() {
	int x = 30;

	printf("%d\n",a);
	printf("%d\n",b);

	iptr = &x;

	printf("%p\n",iptr);
	printf("%d\n",*iptr);
}

void main() {
	int y = 40;

	printf("%d\n",a);
	printf("%d\n",b);
	fun();
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
}
