/*
 Program 2:WAP to take one value from the user in another
          function and print that value in Main Function.
 */

#include<stdio.h>

int fun(){
	int x;
	printf("Enter the value of x :");
	scanf("%d",&x);
	return x;
}

void main(){
	int x = fun();
	printf("Value print in Main : %d",x);
}
