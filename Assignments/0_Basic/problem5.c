/*program 5: WAP to take numerical input from the user 
 and find whether the number is
divisible by 5 and 11. Take all the values from the user */

#include<stdio.h>

void main(){
	
	int x;

	printf("Enter the Num :");
	scanf("%d",&x);

	if(x % 5==0 && x % 11 == 0){
		printf("%d is divisible by 5 and 11.\n",x);
	}
	else{
		printf("%d is not divisible by 5 and 11.\n",x);
	}
}
