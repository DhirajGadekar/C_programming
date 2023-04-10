/*
2. WAP to print the Multiplication of two number using Function Pointer(write a mult
   function and print the multiplied value in main function). 
 */

#include<stdio.h>

int mul(int x,int y){
	int mult = x  * y;
	// printf("Multiplication of %d and %d is %d\n",x,y,x*y);
	return mult;
}
void main() {
	int (*ptr)(int,int) = &mul;
	
	int x,y;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	int mult = ptr(x,y);
	printf("Multiplication of %d and %d is %d\n",x,y,mult);
}
