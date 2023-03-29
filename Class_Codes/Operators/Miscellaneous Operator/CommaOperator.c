#include<stdio.h>

void main(){
	
/*	int x = 10,20,30;    // Error - identifier expected
	printf("%d\n",x);  */

	int y = {10,20,30};  //warning - scalar initialization
	printf("%d\n",y);    //10

	int z = (10,20,30);  //Always Consider Right side value
	printf("%d\n",z);    //30
}	
