/*
1. Write a program to print the first 10 capital Alphabets
 */ 


#include<stdio.h>

void main(){
    char ch1,ch2;

    printf("Enter the first character :");
    scanf(" %c",&ch1);

    printf("Enter the Last character :");
    scanf(" %c",&ch2);

    for(char i = ch1;i <= ch2;i++){
        if(i >= 97 && i <= 102){

	}
	else if(i >= ch1 && i <= ch2){
	       	printf("%c \n",i);
        }
	
    }

}
