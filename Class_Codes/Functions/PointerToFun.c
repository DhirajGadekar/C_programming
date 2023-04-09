#include<stdio.h>

void add(int a,int b){
	printf("%d\n",a + b);
}

void sub(int a,int b){
	printf("%d\n",a - b);
}

void main() {
	void (*ptr)(int ,int);
	ptr = add;
	ptr(20,10);

	ptr = sub;
	ptr(30,20);

	ptr++;
	ptr(40,30);
}
