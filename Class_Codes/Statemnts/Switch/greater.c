/*
Write a program in which ask the user to enter a number from 0 to 5 and print it's spelling,if the
entered number is greater than 5 print entered number is greater than 5 (use if else or switch
case) */

#include<stdio.h>

void main(){
	
	int num;
	printf("Enter Number From 0 to 5 :");
	scanf("%d",&num);

	switch(num){

		case 0 :
			printf("Zero\n");
			break;

		case 1 :
			printf("One\n");
			break;

		case 2:	
			printf("Two\n");
			break;

		case 3:	
			printf("Three\n");
			break;

		case 4:	
			printf("Four\n");
			break;
		
		case 5:	
			printf("Five\n");
			break;

		default :	
			printf("Entered Number is Greater Than 5\n");
	}
		
}
