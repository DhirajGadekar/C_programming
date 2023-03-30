/* Program 8: Write a program, take a character and print whether it is in
UPPERCASE or lowercase. Take all the values from the user*/

#include<stdio.h>

void main(){

        char ch;

        printf("Enter the Char :");
        scanf("%c",&ch);

        if(ch >= 'A' && ch <= 'Z'){
                printf("You entered UPPERCASE character.\n");
        }else{
                printf("You entered LOWERCASE character.\n");

        }
}

