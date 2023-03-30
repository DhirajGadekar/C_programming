//Write program to take a number of months and print the number of days int that months

#include<stdio.h>

void main(){
	
	int num;
	printf("Enter month Number: ");
	scanf("%d",&num);

	if(num == 1){
		printf("January is a 31 days month");
	}
	else if(num == 2){
                printf("February is a 28/29 days month");
        }
	else if(num == 3){
                printf("March is a 31 days month");
        }
	else if(num == 4){
                printf("April is a 30 days month");
        }

	else if(num == 5){
                printf("May is a 31 days month");
        }

	else if(num == 6){
                printf("June is a 30 days month");
        }
	else if(num == 7){
                printf("July is a 31 days month");
        }

	else if(num == 8){
                printf("August is a 31 days month");
        }

	else if(num == 9){
                printf("September is a 30 days month");
        }

	else if(num == 10){
                printf("October is a 31 days month");
        }

	else if(num == 11){
                printf("November is a 30 days month");
        }
	else if(num == 12){
                printf("December is a 31 days month");
        }
	else{
		printf("Invalid Data");
	}

}  
