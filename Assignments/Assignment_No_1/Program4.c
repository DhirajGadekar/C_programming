/*
 4. Write a program to print even numbers 1-100
 */

#include<stdio.h>

void main(){
    int num1,num2;

    printf("Enter the first Number :");
    scanf(" %d",&num1);

    printf("Enter the Last Number :");
    scanf(" %d",&num2);

    for(int i = num1;i <= num2;i++){
        if(i % 2 == 0){
            printf("%d ",i);
        }
    }

}

