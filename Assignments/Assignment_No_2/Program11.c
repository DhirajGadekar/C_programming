/*
 Program 8:
Write a Program that takes the angles of a triangle from the user and
print whether that triangle is valid or not.
 */

#include<stdio.h>

void main() {
	int num1,num2,num3;

	printf("Enter the First Side ::");
	scanf("%d",&num1);
	
	printf("Enter the Second Side ::");
        scanf("%d",&num2);
	
	printf("Enter the Third Side ::");
        scanf("%d",&num3);

	if(num1 + num2 + num3 == 180){
		printf("The triangle with angles %d,%d & %d is an invalid one\n",num1,num2,num3);
	}else{
		printf("The triangle with angles %d,%d & %d is not an invalid one\n",num1,num2,num3);
	}

}
