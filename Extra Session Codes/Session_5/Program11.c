/*
 11. WAP to print the addition of factorials of two given number from user
     Input : num1 = 4
    	     num2 = 5 
     Output : Addition of 4 and 5 is 144	     
 */

#include<stdio.h>

void main() {
	int num1,num2,store1 = 1,store2 = 1,count1 = 0,count2 = 0;
	printf("Enter the Number 1 ::");
	scanf("%d",&num1);

	printf("Enter the Number 2 ::");
	scanf("%d",&num2);
	
	while(num1 >= 1){
		store1 = store1 * num1;
		num1--;
		count1++;
		
	}
	while(num2 >= 1){
		store2 = store2 * num2;
		num2--;
		count2++;
	}
	printf("Addition of Factorials of %d and %d is %d\n",count1,count2,store1+store2);
}
