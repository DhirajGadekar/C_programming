/*
 WAP to print the factorial of the given input number from user.
input : 5
output : factorial of 5 is 120
*/


#include<stdio.h>

void main() {
	
	int num,store = 1,count = 0;
	printf("Enter the number ::");
	scanf("%d",&num);

	while(num >= 1){
		store = store * num;
		num--;
		count++;
	}
	printf("Factorial of %d is %d\n",count,store);
}
