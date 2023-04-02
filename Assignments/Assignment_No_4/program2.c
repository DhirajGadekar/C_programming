#include<stdio.h>

void main() {
	
	int num1,num2 ,x = 11;
	
	printf("Enter the start number :");
	scanf("%d",&num1);
	
	printf("Enter the end number :");
        scanf("%d",&num2);
	
	for(int i = num1 ;i <= num2 ;i++){
		x--;
		
		printf("%d + %d = %d\n",i,x,i + x);

	}
	

}
