/*
 WAP to take 4 digit number and multiply by each digit by 5 and Average of these multiplication.
 */

#include<stdio.h>

void main() {
	
	int num,rem,num2,sum = 0,count = 0;

	printf("Enter the number :");
	scanf("%d",&num);
	printf("Multiplication of each Digit by 5 : ");
	while(num != 0){
		rem = num % 10;
		num2= rem * 5;
		printf(" %d",num2);
		sum = sum + num2;
		num = num / 10;
	}
	printf("\nSum = %d \n",sum);

}
