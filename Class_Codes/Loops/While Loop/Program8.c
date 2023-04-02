/*
 intput : 6
 output : 6 5 4 3 2 1

intput : 7
output :  7 5 3 1
 */

#include<stdio.h>

void main(){
		
	int x;

	printf("Enter the number :");
	scanf("%d",&x);

	if(x % 2 == 0){
		while(x >= 1){
			printf("%d\n",x);
			x--;
		}
	}
	else{
		while(x >= 1){
			printf("%d\n",x);
			x-=2;	
		}

	}
}
