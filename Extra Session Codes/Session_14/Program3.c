/*
3.Write a function for reverse number, even or odd number, prime number and call the all
  function using array of function. 
 */

#include<stdio.h>

void reverce(int num){
	int rem = 0,rev = 0;
	while(num != 0){
		rem = num % 10;
		rev = rev * 10 + rem;
	       	num = num / 10;	
	}
	printf("Reverce number is %d\n",rev);

}

void evenodd(int num){
	if(num % 2 == 0){
		printf("%d is the Even Number.\n",num);
	}else{
		printf("%d is the Odd Number.\n",num);
	}
}

void primeNum(int num){
	int count = 0;
	for(int i = 1;i <= num;i++){
		if(num % i == 0){
			count++;
		}
	}
	if(count == 2){
		printf("%d is Prime Number.\n",num);
	}else{
		printf("%d is Not Prime Number.\n",num);
	}

}
void main(){
	
	void (*ptr[3])(int) = {&reverce,&evenodd,&primeNum};
	
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);

	for(int i = 0;i < 3;i++){
		ptr[i](num);
	}
}
