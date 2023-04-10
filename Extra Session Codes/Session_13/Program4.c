/*
4.Write a function which checks the given number is prime number or not. 
 */

#include<stdio.h>

int PrimeNum(int num){
	int count = 0;

	for(int i = 1;i <= num;i++){
		if(num % i == 0){
			count++;
		}
	}
	return count;
}

void main() {
	
	int num;
	printf("Enter the Number :");
	scanf("%d",&num);

	int count = PrimeNum(num);

	if(count == 2){
		printf("%d is prime number.\n",num);
	}else{
		printf("%d is Not prime number.\n",num);
	}
}
