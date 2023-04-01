/*
Program 10: Write a program to check if a character is a vowel or
consonant. Take all the values from the user 
 */

#include<stdio.h>

void main(){

	char ch;
	printf("Enter the Character :");
	scanf("%c",&ch);

	if(ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O'||ch == 'U'){

		printf("%c is a vowel\n",ch);
	}
	else{
		printf("%c is a consonant\n",ch);
	}

}
