#include<stdio.h>

void main(){
	int num,rem,sum = 0;

	printf("Enter the number :");
	scanf("%d",&num);

	while( num != 0){
		rem = num % 10;
		sum = sum + rem;
		printf("%d ",sum);
		num++;	
			
	}
}
