#include<stdio.h>

void main(){
	int num1 = 0,num2 = 1,n,num3 = 0;

	printf("Enter the number :");
	scanf("%d",&n);

	printf("Fibonacci Series : %d %d ",num1,num2);
	num3 = num1 + num2;

	while(num3 <= n){
		printf("%d ",num3);
		num1 = num2;
		num2 = num3;
		num3 = num1 + num3;

	}
}
