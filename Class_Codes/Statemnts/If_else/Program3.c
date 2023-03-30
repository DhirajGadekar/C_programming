#include<stdio.h>

void main(){

        int num;
        printf("Enter Your Number :");
        scanf("%d",&num);
        printf("Your Number is : %d\n",num);

        if(num%2 == 0){
                printf("Given Number is an Even \n");
        }
        else{
                printf("Given Number is an Odd \n");
        }
}

