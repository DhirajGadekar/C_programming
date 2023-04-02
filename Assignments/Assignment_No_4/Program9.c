#include<stdio.h>

void main() {

        int num,rem,sum = 0;

        printf("Enter the number :");
        scanf("%d",&num);

        while(num != 0){
                rem = num % 10;
		sum = sum*10+rem;
                num = num / 10;
        }
	printf("%d",sum);

        

}

