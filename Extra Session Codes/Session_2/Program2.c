/*
 Program 2 :WAP to find the given input is character,digit or special character.

 */

#include<stdio.h>

void main() {
	char ch;
	printf("Enter the value :");
	scanf("%c",&ch);

	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'){
		
		printf("%c is the character.\n",ch);

	}else if(ch >= 48 && ch <= 57) {

		printf("%c is the digit.\n",ch);

	}else{

		printf("%c is the special Character.\n",ch);
	}
}
