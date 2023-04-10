/*
  4.WAP which shows the concept of array of pointer to an array.
 */

#include<stdio.h>

void main() {
	int arr1[] = {10,20,30};
	int arr2[] = {40,50,60};

	int (*ptr[])[3]= {&arr1,&arr2};

	printf("%p\n",ptr);
	printf("%p\n",*ptr);

	for(int i = 0;i < 2;i++){
		for(int j = 0;j < 3;j++){
			printf("%d\n",*(*((*ptr)+i)+j));
		}

	}
}
