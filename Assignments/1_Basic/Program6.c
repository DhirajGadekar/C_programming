/*
 6. Write a program to print reverse from 100-1
 */


#include<stdio.h>

void main(){
    int num1,num2;

    printf("Enter the first Num :");
    scanf(" %d",&num1);

    printf("Enter the Last Num :");
    scanf(" %d",&num2);

    for(int i = num2;i >= num1;i--){
        printf("%d\n",i);

    }

}

