/* Program 9: Write a program, take a number and
  print whether it is positive or negative.
  Take all the values from the user*/

#include<stdio.h>

void main(){
	
	int num;

	printf("Enter the Number :");
	scanf("%d",&num);

	if(num > 0){
		printf("%d is Positive Number\n",num);
	}	
	else if(num < 0){
		printf("%d is Negetive number\n",num);
	}
	else{
		printf("You entered zero\n");
	}

}
