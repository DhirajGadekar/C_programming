#include<stdio.h>

void main() {
	int arr[] = {1,2,3,4,5};

	int (*ptr)[5] = &arr;

	for(int i = 0;i < 5;i++){
		printf("%d\n",*(*ptr + i));
	}
}
