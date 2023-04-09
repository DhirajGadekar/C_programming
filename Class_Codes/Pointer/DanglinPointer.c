#include<stdio.h>

int *ptr = NULL;
void fun() {
	int num = 12;
	ptr = &num;
	printf("%d\n",*ptr);
}
void main() {
	
	fun();
	printf("%d\n",*ptr);
	
}
