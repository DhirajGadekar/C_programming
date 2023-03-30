#include<stdio.h>

void main(){
	
	int x;
	printf("Enter the week num :");
	scanf("%d",&x);

	if(x == 0){
		printf("Monday \n");
	}
	else if(x == 1){
		printf("Tuesday \n");
	}
	else if(x == 2){
		printf("Wednesday \n");
	}
	else if(x == 3){
		printf("Thursday \n");
	}
	else if(x == 4){
		printf("Friday \n");
	}
	else if(x == 5){
		printf("Saturday \n");
	}
	else if(x == 6){
		printf("Sunday \n");
	}
	else{
		printf("Invalid Num ,Plz Enter Correct Num \n");
	}

}	
