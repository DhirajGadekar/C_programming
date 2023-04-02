#include<stdio.h>

void main() {

        int num,rem,sum = 0;

        printf("Enter the number :");
        scanf("%d",&num);
       
        while(num != 0){
                rem = num % 10;
                sum = sum + rem;
                num = num / 10;
        }
        printf("\nSum = %d \n",sum);

}
 
