#include<stdio.h>

struct Demo{
	char ch1;
	int x;
	float y;
	char arr[10];
};

void main(){
	
	printf("%ld\n",sizeof(struct Demo));
}
