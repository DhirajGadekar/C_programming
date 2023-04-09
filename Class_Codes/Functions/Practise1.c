/*
  Program 1 :WAP to take a value from user in main function 
            and print the value in another function
 */

#include<stdio.h>

void fun(int *ptr){
	printf("Value Print in Function : %d\n",*ptr);
}

void main(){
	int x;
	printf("Enter the value ::");
	scanf("%d",&x);
	fun(&x);
}
