/*
9. Write a program to print the sum of the first 10 odd numbers
*/

#include<stdio.h>

void main(){
    int num1,num2,sum = 0;

    printf("Enter the first num :");
    scanf(" %d",&num1);

    printf("Enter the Last num :");
    scanf(" %d",&num2);

    for(int i = num1;i <= num2;i++){
        if(i % 2 == 1){
		sum = sum + i;
	}
    }
    printf("Sum of First 10 Num = %d\n",sum);


}


