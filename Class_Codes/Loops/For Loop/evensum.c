 // print the even sum 
 

#include<stdio.h>

void main(){
	int num1,num2;
	int sum = 0;

	printf("Enter the first Num :");
	scanf("%d",&num1);

	printf("Enter the last Num :");
	scanf("%d",&num2);

	for(int i = num1; i <= num2;i++){
		if(i % 2 == 0){
			sum = sum + i;
		}
	}
	printf("Addition of all even %d to %d num :%d\n",num1,num2,sum);
}
