/*
 1.WAP a program to cheak whether the input is Leap year or Not year
 */

#include<stdio.h>

void main(){
	int year;

	printf("Enter the Year :");
	scanf("%d",&year);

	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		printf("%d is a Leap Year.\n",year);

	}else{
		printf("%d is Not a Leap Year.\n",year);
	}
}
