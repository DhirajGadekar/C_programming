#include<stdio.h>

void main(){
	
	int x = 5;
	int output;

	printf("%d\n",x);         //5
	printf("%d\n",output);    //Garbage value

	output = ++x;
	printf("%d\n",x);         //6
	printf("%d\n",output);    //6
}	
