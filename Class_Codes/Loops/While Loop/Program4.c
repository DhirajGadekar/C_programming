/*
 WAP to print number is divisible by 4 and 5 by using while loop
 */

#include<stdio.h>

void main (){
	
	int start,end;

	printf ("Enter the Start Number :");
	scanf("%d",&start);

	printf ("Enter the Start Number :");
        scanf("%d",&end);

	while(start <= end){
		if(start % 4==0 && start % 5 == 0){
			printf("%d is divisible by 4 and 5 \n",start);
		}
		start++;
	}

}
