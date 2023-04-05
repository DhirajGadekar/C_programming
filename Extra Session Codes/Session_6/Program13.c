/*
13. WAP to print the numbers whose factorial is even. Take range from user
	Input :  Start 1
                 End 5
	Output : 2 3 4 5
*/

#include<stdio.h>

void main () {
	
	int start,end,store = 1;
	printf("Enter the start number ::");
	scanf("%d",&start);
	printf("Enter the end number ::");
	scanf("%d",&end);
	
	printf("Those number have an even factorial ::\n");
	
	while(start <= end){
		store = store * start;
		
		if(store % 2 == 0){
			printf("%d\n",start);
		}
		start++;
	}
}
