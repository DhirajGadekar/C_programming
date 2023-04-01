/* Program 7:
Write a program, take a number and print whether it is less
than 10 or greaterthan 10. Take all the values from the user
*/

#include<stdio.h>

void main(){

        int num;

        printf("Enter the Num :");
        scanf("%d",&num);

        if(num > 10){
                printf("%d is greater than 10.\n",num);
        }else{
                printf("%d is less than 10.\n",num);

        }
}

