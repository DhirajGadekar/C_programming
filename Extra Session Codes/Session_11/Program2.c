/*
 2. WAP which shows a concept of void pointer and access data using void pointer(Don’t repeat class example).
 */
 
#include<stdio.h>

void main() {

	int num = 10;

	void *ptr = &num;

	printf("%d\n",*((int*)ptr));
}
