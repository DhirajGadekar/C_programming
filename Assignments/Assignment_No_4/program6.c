#include<stdio.h>

void main(){
	int x ;
	int rem,count= 0;
	printf("Enter the number :");
	scanf("%d",&x);

	while(x !=0){
		rem = x % 10;
	       	x = x /10;
		count++;	
	}
	printf("Number of Digit is %d ",count);	
}
