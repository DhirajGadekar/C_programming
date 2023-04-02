/*
 print the table by using While loop
 */

#include<stdio.h>

void main() {
	
	int i;
	int x = 1;
	printf("Enter the number whose table you want :");
	scanf("%d",&i);

	while(x <= 10){
		printf("%d * %d = %d\n",x,i,x * i);
		x++;
	}
}
