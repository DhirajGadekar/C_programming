/*
 Program 10:
Write a program, take two characters if these characters are equal then print them as it is
but if they are unequal then print their difference.
 */

#include<stdio.h>

void main(){
	
	char ch1,ch2;

	printf("Enter the character ::");
	scanf(" %c",&ch1);
	
	printf("Enter the character ::");
        scanf(" %c",&ch2);

	
	if(ch1 == ch2){
		printf("Char %c and Char %c is same.\n",ch1,ch2);
	}
	else if(ch1 > ch2){ 
                printf("Difference between %c and %c is %d \n",ch1,ch2,ch2-ch1);
        }
	else if(ch2 > ch1){
                printf("Difference between %c and %c is %d \n",ch1,ch2,ch2-ch1);
        }
	else {
		printf("You Entered Invalid input.\n");
	}
	

}
