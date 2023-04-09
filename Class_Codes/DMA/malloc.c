//malloc() :

#include<stdio.h>
#include<stdlib.h>

void mymalloc(){
	int x;
	printf("Enter the number :");
	scanf("%d",&x);

	int *ptr = (int*)malloc(sizeof(int));
	*ptr = x;
	printf("%d\n",*ptr);
}
void main(){
	mymalloc();
}
