/*
 3. WAP to print all the composite numbers between a given range
Input : Enter Start 1
Enter End 15
Output:
4 6 8 9 10 12 14 15
Input : Enter Start 31
Enter End 35
Output:
32 33 34 35
 */

#include<stdio.h>

void main(){
	int start,end,count;
	
	printf("Enter the start Number ::");
	scanf("%d",&start);

	printf("Enter the end Number ::");
	scanf("%d",&end);

	for(int i = start;i <= end;i++){
		count = 0;
		for(int j = start;j <= i;j++){

		  	if(i % j == 0){
				count++;
			}
		}
		if(count > 2){
			printf("%d \n",i);
		}
	}
}
