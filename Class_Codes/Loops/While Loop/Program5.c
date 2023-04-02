/*
 WAP to take 4 digit number and addition of each digit by using while loop
 */

#include<stdio.h>

void main(){
	int x = 3746;
	int rem ,sum = 0;

	while(x != 0){
		rem = x % 10;
		printf("%d \n",rem);
		sum = sum + rem;
		x = x /10;
	}
	printf("Sum Of Each Digit : %d\n",sum);
}
