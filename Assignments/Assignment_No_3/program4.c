/*
 4. WAP to Find the sum of numbers that are divisible by 5 in the given range
 */

#include<stdio.h>

void main(){
        int start ,end,sum = 0;

        printf("Enter the Start Number :");
        scanf("%d",&start);
        printf("Enter the End Number :");
        scanf("%d",&end);

        for(int i = start ;i <= end;i++){
                if(i % 5 == 0){
			sum = sum + i;
                }
		
        }
	printf("Sum of numbers that are divisible by 5 :%d\n",sum);


} 
