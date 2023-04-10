/*
 2.WAP of swapping two numbers by using call by value. 
 */

#include<stdio.h>

void swap(int x ,int y){
	int temp;	

	printf("Before Swaping\n");
	printf("x = %d\n",x);
	printf("y = %d\n",y);

	//swap
	temp = x;
	x = y;
	y = temp;

	printf("After swaping :\n");
	printf("x = %d\n",x);
	printf("y = %d\n",y);
}

void main() {
	int x,y;
	printf("Enter the value of x : ");
	scanf("%d",&x);

	printf("Enter the value of y : ");
	scanf("%d",&y);

	swap(x,y);
}
