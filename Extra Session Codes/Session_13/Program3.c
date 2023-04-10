/*
3.WAP of swapping two numbers by using call by address. 
 */

#include<stdio.h>

void swap(int *ptr1,int *ptr2){
	int temp;
	
	printf("Before Swaping : \n");
	printf("num1 = %d\n",*ptr1);
	printf("num2 = %d\n",*ptr2);

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void main() {
	int num1,num2;

	printf("Enter the value of 1st Num : ");
	scanf("%d",&num1);
	
	printf("Enter the value of 2nd Num : ");
	scanf("%d",&num2);

	int *ptr1 = &num1;
	int *ptr2 = &num2;

	swap(&num1,&num2);
	
	printf("After Swaping : \n");
	printf("num1 = %d\n",*ptr1);
	printf("num2 = %d\n",*ptr2);
}
