#include<stdio.h>

void main(){
	
	int num;
	printf("Enter Your Number :");
	scanf("%d",&num);
	printf("Your Number is : %d\n",num);

	if(num%5 == 0){
		printf("Given Number is Divisible by 5 \n");
	}
	else{
		printf("Given Number is Not Divisible by 5 \n");
	}
}	
