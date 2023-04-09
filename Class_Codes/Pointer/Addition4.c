#include<stdio.h>
void main() {
	int x = 12;   //100
	int y = 13;   //104

	int *ptr1 = &x;
	int *ptr2 = &y;

	printf("%d\n",*ptr1 + 1);  //100 + 1 * 4 =104 = 13
}	
