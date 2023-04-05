/*
 WAP to print the factorial of each number between a given range.
start : 1
end : 5
output : factorial of 1 is 1
	 factorial of 2 is 2
	 factorial of 3 is 3
	 factorial of 4 is 24
	 factorial of 5 is 120

*/


#include<stdio.h>

void main() {
	
	int start,end,store = 1,count = 0;
	printf("Enter the start number ::");
	scanf("%d",&start);
	printf("Enter the end number ::");
	scanf("%d",&end);

	for(int i = start;i <= end;i++){

		store = store * i;
		printf("Factorial of %d is %d\n",i,store);
		
	}
	
}
