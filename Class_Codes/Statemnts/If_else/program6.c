#include<stdio.h>

void main() {
	
	int num;
	printf("Enter the Number");
	scanf("%d",&num);

	if(num == 0){
		printf("Zero \n");
	}	
	else if(num == 1){
		printf("One \n");
	}
	else if(num == 2){
		printf("Two \n");
	}	
	else if(num == 3){
		printf("Three \n");
	}	
	else if(num == 4){
		printf("Four \n");
	}
	else if(num == 5){
		printf("Five \n");
	}
	else if(num == 6){
		printf("Six\n");
        }
	else{
		printf("This value is not available\n");
        }

}
