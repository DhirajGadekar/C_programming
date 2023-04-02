/*
    1. WAP a program to see a given number is a multiple of 3
 */

#include<stdio.h>

void main(){
	
	int x ,y;

	printf("Enter the Start No :");
	scanf("%d",&y);
	printf("Enter the End No :");
        scanf("%d",&x);
	printf("Multiple of 3 Number :\n");
	for(int i = y;i <= x;i++){
		if(i % 3 == 0){
			printf("%d\n",i);		
		}

	}
}
