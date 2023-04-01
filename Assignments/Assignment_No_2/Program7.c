/*
Program 6.WAP to get 10 numbers from Users and find their sum and average. 
 */

#include<stdio.h>

void main(){

	int num1,num2,num3;
	int sum = 0;
	printf("Enter the start num: ");
	scanf("%d",&num1);

	printf("Enter the end Num :");
	scanf("%d",&num2);


	for(int i = num1 ; i <= num2; i++){
		printf("Enter the number ::");
		scanf("%d",&num3);
		sum = sum + i;

	} 
	printf("Addition :: %d\n",sum);
	printf("Average :: %d\n",sum / 10);
}
