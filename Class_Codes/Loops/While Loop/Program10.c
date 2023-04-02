/*
 10.Write a C program to print the charater is vowel or consonant from 'A' to 'Z'.Take lower bound & upper bound of charater range from user.
 */

#include<stdio.h>

void main(){
	
	char ch1,ch2,lowercase,Uppercase;

	printf("Enter the Lower Bound Character :");
	scanf(" %c",&ch1);
	
	printf("Enter the Upper Bound Character :");
        scanf(" %c",&ch2);
	
	while(ch1 <= ch2){
		lowercase = 'a' == ch1 || 'e' == ch1 || 'i' == ch1 || 'o' == ch1 || 'u' == ch1;
		Uppercase = 'A' == ch1 || 'E' == ch1 || 'I' == ch1 || 'O' == ch1 || 'U' == ch1;
		if(lowercase || Uppercase){
			printf("%c is Vowel\n",ch1);
		}
		else{
			printf("%c is consonant\n",ch1);
		}
		ch1++;
	}
}
