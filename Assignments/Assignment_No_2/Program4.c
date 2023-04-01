/*
 4.WAP a program 
 */

#include<stdio.h>

void main(){
	int num;

	printf("Enter the month Number :");
	scanf("%d",&num);

	if(num == 1){
		printf("IN January 31 days.\n");

	}else if(num == 2){
                printf("IN February 28/29 days.\n");
        
	}else if(num == 3){
                printf("IN March 31 days.\n");
        
	}else if(num == 4){
                printf("IN April 30 days.\n");
        

	}else if(num == 5){
                printf("IN May 31 days.\n");
        

	}else if(num == 6){
                printf("IN June 30 days.\n");
        
	}else if(num == 7){
                printf("IN July 31 days.\n");
        
	}else if(num == 8){
                printf("IN August 31 days.\n");
        

	}else if(num == 9){
                printf("IN september 30 days.\n");
        
	}else if(num == 10){
                printf("IN October 31 days.\n");
        
	}else if(num == 11){
                printf("IN November 30 days.\n");
        
	}else if(num == 12){
                printf("IN December 31 days.\n");
        }else{
		printf("You Entered Invalid Input\n");
	}



}
