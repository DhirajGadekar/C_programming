/*
 8. Write a program to print a table of 11 in reverse order
 */

#include<stdio.h>

void main(){
    int num1,num2,num3;

    printf("Enter the first Num :");
    scanf(" %d",&num1);

    printf("Enter the Last Num :");
    scanf(" %d",&num2);

    printf("Enter the Number :");
    scanf(" %d",&num3);

    for(int i = num2;i >= num1;i--){
        printf("%d\n",i * num3);

    }

}

