#include<stdio.h>

void main(){

	char ch;
	int firstI,SecI;
	while(1){
		printf("Enter Your Expression : ");
		scanf("%d %c %d",&firstI,&ch,&SecI);
	

		switch(ch){

			case '+' : 
				printf("Addition of %d and %d = %d\n",firstI,SecI,firstI+SecI);
				break;

			case '-' :
                        	printf("Substraction of %d and %d = %d\n",firstI,SecI,firstI-SecI);
                        	break;
			case '*' :
                        	printf("Multiplication %d and %d = %d\n",firstI,SecI,firstI*SecI);
                        	break;
		
			case '/' :
                        	printf("Division %d and %d = %d\n",firstI,SecI,firstI/SecI);
                        	break;

			default :
				printf("Wrong Input !\n");	

		}
		
	}
}
