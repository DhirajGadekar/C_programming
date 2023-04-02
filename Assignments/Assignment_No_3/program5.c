/*
 5. WAP to take the Number input and print all the factors of that number.
 */

#include<stdio.h>

void main(){
        int num;

        printf("Enter the number:");
        scanf("%d",&num);

        printf("factor of %d is \n",num);

        for(int i = 1 ;i <= num;i++){
                if(num % i == 0){
                	printf("%d\n",i);
                }
        }

} 
