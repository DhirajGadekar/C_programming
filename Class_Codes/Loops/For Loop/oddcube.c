#include<stdio.h>

void main(){
	
	int num1,num2;

	printf("Enter the first Number :");
	scanf("%d",&num1);

	printf("Enter the second Number :");
	scanf("%d",&num2);

	for(int i = num1; i <= num2; i++){
		if(i % 2 != 0){
			printf("odd %d num Square : %d\n",i,i * i);
		}
		else{
			printf("Odd %d Num cube :%d\n",i,i*i*i);
		}
	}
}
