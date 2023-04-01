/*
 10. Write a program to print the product of the first 10 numbers
 */

#include<stdio.h>

void main(){
    int num1,num2,product = 1;

    printf("Enter the first Num :");
    scanf(" %d",&num1);

    printf("Enter the Last Num :");
    scanf(" %d",&num2);

    for(int i = num1;i <= num2;i++){
        product = product * i;
    }
    printf("product of %d to %d Num = %d\n",num1,num2,product);


}

