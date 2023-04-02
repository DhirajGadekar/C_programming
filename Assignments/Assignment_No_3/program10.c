/*
 10. WAP to print the numbers in a given range and their multiplicative inverse.
Suppose x is a number then its multiplicative inverse or reciprocal is 1/x.
The expected output for range 1 - 5
 */
#include<stdio.h>

void main(){
        int start ,end;
	float x = 1;

        printf("Enter the Start Number :");
        scanf("%d",&start);
        printf("Enter the End Number :");
        scanf("%d",&end);

        for(int i = start ;i <= end;i++){
                
		x = 1.0 / i;
		printf("%d = %f\n",i,x);
	
        }

} 
