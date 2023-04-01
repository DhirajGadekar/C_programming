/*
Program 9: WAP to print the count of divisors of the entered num.
*/

#include<stdio.h>

void main(){
	int num1,num2;

	printf("Enter the Start Number :");
	scanf("%d",&num1);

	printf("Enter the End Number :");
	scanf("%d",&num2);
	
	printf("Divisiors of %d are : \n",num2);

	for(int i = num1 ; i < num2 ;i++){
		if(num2 % i == 0){
			printf("%d \n",i);
		}
	}

}
