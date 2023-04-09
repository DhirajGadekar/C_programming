// Bit Field

#include<stdio.h>

struct Demo{

	int x:1;
	char ch;
	float y;
};

void main() {

	printf("%ld\n",sizeof(struct Demo));
}
