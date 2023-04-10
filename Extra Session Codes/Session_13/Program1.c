/*
1.Write a function which returns the addition of two numbers and print the answer in main
  function. 
 */

#include<stdio.h>

int fun(int x,int y){
	
	printf("First Num = %d\n",x);
	printf("Second Num = %d\n",y);

	return x + y;
}

void main() {
	int x,y;
	printf("Enter the first number : ");
	scanf("%d",&x);
	
	printf("Enter the Second number : ");
	scanf("%d",&y);
	
	int add = fun(x,y);
	printf("Addtion of %d and %d is %d\n",x,y,add);
}
