/*
 6. WAP to calculate the factorial of a given number.
 */

#include<stdio.h>

void main(){
        int num,mul = 1;

        printf("Enter the Number :");
        scanf("%d",&num);    

        for(int i = 1 ;i <= num;i++){		
		
		mul = mul * i;
                
        }
	printf("factorial of %d is : %d \n",num,mul);

} 
