//Dangling Pointer Part :2

#include<stdio.h>
#include<stdlib.h>

void dangling(int num){
	
	int *ptr1 = (int *)malloc(sizeof(int));
	*ptr1 = num;
	int *ptr2 = ptr1;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);

	free(ptr1);

	printf("%d\n",*ptr2); //Garbage or 0
			      
}

void main (){
	int num;
	printf("Enter the value : ");
	scanf("%d",&num);

	dangling(num);
}
