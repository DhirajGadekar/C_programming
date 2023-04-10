/*
 2. WAP to use predefined length function and your own length function for array.(get array
    from user).
 */

#include<stdio.h>

int strlength(char* str){
	int count = 0;

	while(*str != '\0'){
		count++;
		str++;
	}
	return count;
}

void main(){

	char str1[20];
	printf("Enter the string : ");
	scanf("%s",str1);

	puts(str1);

	int length = strlength(str1);
	printf("The Length of the string is %d.\n",length);
}
