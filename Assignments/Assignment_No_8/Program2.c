/*
 2. WAP to count digits in given no
	Input: 94211
	Output: digit count is 5
 */

#include<stdio.h>

void main() {
	
	int x,rem,count = 0;

	printf("Enter the Number ::");
	scanf("%d",&x);

	while(x != 0){
		rem = x % 10;
		x = x / 10;
		count++;
	}
	printf("Digit Count is %d \n",count);
}
