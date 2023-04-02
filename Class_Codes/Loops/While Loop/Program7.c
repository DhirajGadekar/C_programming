/*
 WAP to print the countdown of days to submit th assignment
 */

#include<stdio.h>

void main(){

	int start,end;

	printf("Enter the start Day Num :");
	scanf("%d",&start);
	
	printf("Enter the end Day Num :");
        scanf("%d",&end);
	
	while(end >= start){
		if(end == 1){
			printf("%d day Remaining \n",end);
		}
		else{
			printf("%d days Remining \n",end);
		}
		end--;
	}
	printf("0 Due Date\n");
}
