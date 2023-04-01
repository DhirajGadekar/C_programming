/*
 3.WAP a program to find the minimum number amoongs three inputs
 */



#include<stdio.h>

void main(){
 	int num1,num2,num3;

        printf("Enter the First Number :");
        scanf("%d",&num1);
        printf("Enter the second Number :");
        scanf("%d",&num2);
        printf("Enter the third Number :");
        scanf("%d",&num3);

        if(num1 < num2 && num1 < num3){
                printf("%d is minimum Number.\n",num1);
        }
        else if(num2 < num1 && num2 < num3){
                printf("%d is minimum Number.\n",num2);
        }
        else if(num3 < num1 && num3 < num2){
                printf("%d is minimum Number.\n",num3);
        }
	else if(num1 == num2 && num3 == num1 && num2 == num3){
		printf("All inputs are same\n");
	}
        else {
                printf("Wrong Input. \n");
        }
}
