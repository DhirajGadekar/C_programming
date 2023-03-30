#include<stdio.h>

void main(){
	int x;
	int y;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	printf("Enter the value of y : ");
	scanf("%d",&y);

	if(x > y){
		printf("%d is the Max Number among %d and %d",x,x,y);
	}
	else{
		printf("%d is the Max Number among %d and %d",y,x,y);
	}
}	
