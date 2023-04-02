#include<stdio.h>

void main() {
	
	int num1,num2,sum = 0;

	printf("Enter the start Number :");
	scanf("%d",&num1);
	
	printf("Enter the end Number :");
        scanf("%d",&num2);

	for(int i = num1 ;i <= num2;i++){
		if(i % 3 != 0){
			sum = sum + i;
		}
	}
	printf("Sum of the number not divisible by 3 is %d\n",sum);

}
