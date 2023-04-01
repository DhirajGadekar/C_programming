/*
 Program 4: Write a program, in which according to the month number
print the no. of days in that month
(use switch case)
 */

#include<stdio.h>

void main(){
	int num;

	printf("Enter the Month Number :");
	scanf("%d",&num);

	switch(num){
		
		case 1:
			printf("In January 31 Days.\n");
		  	break;
		case 2:
                        printf("In February 28/29 Days.\n");
                        break;
		case 3:
                        printf("In March 31 Days.\n");
                        break;
		case 4:
                        printf("In April 30 Days.\n");
                        break;
		case 5:
                        printf("In May  31 Days.\n");
                        break;
		case 6:
                        printf("In June 30 Days.\n");
                        break;
		case 7:
                        printf("In July 31 Days.\n");
                        break;
		case 8:
                        printf("In August 31 Days.\n");
                        break;
		case 9:
                        printf("In October 30 Days.\n");
                        break;
		case 10:
                        printf("In September 31 Days.\n");
                        break;
		case 11:
                        printf("In November 31 Days.\n");
                        break;
		case 12:
                        printf("In December 31 Days.\n");
                        break;

		default :
			printf("You entered Wrong Input \n");	
	
	}
}
