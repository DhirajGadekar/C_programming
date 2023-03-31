#include<stdio.h>

void main(){

	int num1,num2;
	int count = 0;

	printf("Enter the first number :");
	scanf("%d",&num1);

	printf("Enter the last Number : ");
	scanf("%d",&num2);

	for(int i = num1; i <= num2;i++){
		if(i % 5 == 0){
			count++;
		}
	}
	printf("count of divisible by 5 between %d to %d number : %d\n",num1,num2,count);
}
