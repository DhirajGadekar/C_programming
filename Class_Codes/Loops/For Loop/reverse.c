#include<stdio.h>

void main(){
	
	int num1,num2;

	printf("Enter the fisrt Num :");
	scanf("%d",&num1);

	printf("Enter the last Num :");
        scanf("%d",&num2);

	for(int i = num1;i >= num2 ;i--){
		printf("%d\n",i);
	}
	

}
