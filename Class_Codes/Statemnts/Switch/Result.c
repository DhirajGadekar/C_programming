#include<stdio.h>

void main(){
	
	int x;
	printf("Enter your Marks(0-100) :");
	scanf("%d",&x);

	switch(x/10){

		case 9 :
			printf("First Class\n");
			break;

		case 8 :
			printf("Second Class\n");
			break;

		case 7 :
			printf("Third Class\n");
			break;
	}
}
