/*
 3. Write a program to print the first ten, 3 digit number
 */

#include<stdio.h>

void main(){
    int num1,num2;

    printf("Enter the Start num :");
    scanf(" %d",&num1);

    printf("Enter the End Num :");
    scanf(" %d",&num2);

    for(int i = num1;i <= num2;i++){

        if(i >= 100 && i <= 999){
		printf("%d \n",i);

	}
	
    }

}

