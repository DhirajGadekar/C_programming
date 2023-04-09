#include<stdio.h>

void main(){
	char carr[] = {'A','B','C','D','E'};

	char *ptr1 = &carr[1];
	char *ptr2 = &carr[4];

	printf("%c\n",ptr2 - ptr1);
}
