/* void pointer : 
 1.void pointer the any type address
 2.void pointer is generic pointer
 3.malloc return type is void*
 4.void pointer is not directly dereference ,for the dereferencing we use the type casting method.
 */

#include<stdio.h>
void main() {
	
	int x = 12;
	char ch = 'A';
	float f = 12.23;
	double d = 123.234;
	
	void *ptr1 = &x;
	void *ptr2 = &ch;
	void *ptr3 = &f;
	void *ptr4 = &d;

	printf("%d\n",*((int*)ptr1));
	printf("%c\n",*((char*)ptr2));
	printf("%f\n",*((float*)ptr3));
	printf("%lf\n",*((double*)ptr4));
}
