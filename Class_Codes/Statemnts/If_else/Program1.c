#include<stdio.h>

void main(){
	
	int num;
	printf("Enter the Number :");
	scanf("%d",&num);
	printf("Your Numder is : %d\n",num);

	if(num > 0){
		printf("Your Number is Positive");
	}	
	else if(num < 0){
		printf("Your Number is Negative");
	}
	else{
		printf("Your Number is Zero");
	}	

}	

