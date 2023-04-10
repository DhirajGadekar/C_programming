/*
4. Write a function for string reverse and check it reversed string and original string is same
   or not 
*/

#include<stdio.h>

char* mystrrev(char *str){
	char ch = 0;
	char *temp = str;

	while(*temp != '\0'){
		temp++;
	}
	temp--;

	while(str < temp){
		ch = *str;
		*str = *temp;
		*temp = ch;
		
		temp--;
		str++;	
	}
	return str;
}

void main() {

	char str[20];
	printf("Enter the string :");
	gets(str);
	
	mystrrev(str);
	puts(str);
}
