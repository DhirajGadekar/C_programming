#include<stdio.h>

void main() {
	int num = 12;
	char ch = 'A';
	
	void *ptrnum = &num;
	void *ptrch = &ch;

	printf("%d\n",*(int*)ptrnum);
	printf("%c\n",*(char*)ptrch);
	
}
