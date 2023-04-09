/*
 3. Take an array of void pointer and store data of multiple datatype of element(int, char ,float) & Print the array.
 */

#include<stdio.h>

void main() {
	
	int x = 10;
	char ch = 'A';
	float f = 12.3;

	void* ptr[3] = {&x,&ch,&f};

	printf("%d\n",*((int*)ptr[0]));
	printf("%c\n",*((char*)ptr[1]));
	printf("%f\n",*((float*)ptr[2]));
}
