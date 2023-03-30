/*Program 6:
Write a program to check if a number is even or odd.
Take all the values from the user*/

#include<stdio.h>

void main(){
	
	int var;

	printf("Enter the Num :");
	scanf("%d",&var);

	if(var % 2 == 0){
		printf("%d is the Even Number.\n",var);
	}else{
		printf("%d is the Odd Number.\n",var);

	}
}
