/*
 5.Write a function which returns the reverse number of the given number 
 */

#include<stdio.h>

int reverse(int num){
	int rem = 0,rev = 0;
	while(num != 0){
		
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
	}
	return rev;
}

void main() {
	int num;
	printf("Enter the number :");
	scanf("%d",&num);

	int rev = reverse(num);
	printf("Reverse number of given number : %d\n",rev);
}
