/*
 1. WAP To Print all the divisors of given no
	Input: 30
	Output: 1 2 3 5 6 10 15 30
 */

#include<stdio.h>

void main(){
	int x;

	printf("Enter the Number :");
	scanf("%d",&x);

	printf("Divisors of %d is \n ",x);

	for(int i = 1;i <= x;i++){
		if(x % i == 0){
			printf("%d ",i);
		}
	}
}
