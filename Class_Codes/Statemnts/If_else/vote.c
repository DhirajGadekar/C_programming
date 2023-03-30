#include<stdio.h>

int main(){

	int x;
	
	if(x%2!=0 && x <= 10){
		
		printf("%d\n",x);
		x = x + 1;
	}
	printf("%d\n",x);
}	
