#include<stdio.h>

void main() {

        int num,rem,pro = 1;

        printf("Enter the number :");
        scanf("%d",&num);

        while(num != 0){
                rem = num % 10;
                pro = pro * rem;
                num = num / 10;
        }
        printf("\nproduct = %d \n",pro);

}

