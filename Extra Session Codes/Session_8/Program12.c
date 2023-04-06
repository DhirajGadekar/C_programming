/*
12. Take no of rows from the user ROWS = 5
	1 3 5 7 9 7 5 3 1
	  9 7 5 3 5 7 9
	    3 5 7 5 3
	      7 5 7
	        5 
 */

#include<stdio.h>

void main() {

	int row,num,num1,num2;
	printf("Enter the no of row :");
	scanf("%d",&row);
	num2 = row;
	
	for(int i = 1;i <= row;i++){
		num = i;
		num1 = (row + row + 1) - i;
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}
		for(int j = 2*row-2*i+1; j >= 1;j--){
			
			if(i % 2 == 1){
				if(j > num2){
					printf("%d\t",num);
					num += 2;
				}else{
					printf("%d\t",num);
					num -= 2;
				}
			}else{	
				if(j > num2){
					printf("%d\t",num1);
			 		num1 -= 2;
				}else{
					printf("%d\t",num1);
					num1 += 2;
				}
			}
		}
		num2--;
		printf("\n");
	}

}
