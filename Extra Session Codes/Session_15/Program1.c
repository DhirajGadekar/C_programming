/*
 1. WAP to initilise a character array or String in a multiple way and print (from user and
    hardcoaded using for loop and get()).
 */

#include<stdio.h>

void main() {
	char str1[] = {'D','H','I','R','A','J',' ','G','A','D','E','K','A','R','\0'};
	char *str2 = "Virat Kohli";
	
	char str3[20];
	printf("Enter the String :\n");
	gets(str3);

	char* str4 = str3;

	printf("print the string using puts \n");
	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);

	printf("Print the string using printf : \n");
	printf("%s\n",str1);
	printf("%s\n",str2);
	printf("%s\n",str3);
	printf("%s\n",str4);

	printf("Print String forloop :\n");

	for(int i = 0;str1[i] != '\0';i++){
		printf("%c",str1[i]);
	}
	
	printf("\n");
	
	for(int i = 0;str2[i] != '\0';i++){
		printf("%c",str2[i]);
	}
	
	printf("\n");
	
	for(int i = 0;str3[i] != '\0';i++){
		printf("%c",str3[i]);
	}
	
	printf("\n");

	for(int i = 0;str4[i] != '\0';i++){
		printf("%c",str4[i]);
	}
	
	printf("\n");
}
