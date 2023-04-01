/*Program 3: WAP to find max among 2 numbers. Take all the values from the
user*/

#include<stdio.h>

void main(){
	
	int x;
	int y;

	printf("Enter First Number :");
	scanf("%d",&x);
	
	printf("Enter Second Number :");
        scanf("%d",&y);

	if(x>y){
		printf("%d is Max Number.\n",x);
	}
	else{
		printf("%d is Max Number.\n",y);
	}
}
