/*Program 4: WAP to find min among 2 numbers. Take all the values from the user */

#include<stdio.h>

void main(){

        int x;
        int y;

        printf("Enter First Number :");
        scanf("%d",&x);

        printf("Enter Second Number :");
        scanf("%d",&y);

        if(x<y){
                printf("%d is Min Number.\n",x);
        }
        else{
                printf("%d is Min Number.\n",y);
        }
}
