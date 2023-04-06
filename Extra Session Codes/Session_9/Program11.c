/*
 11. Take no of rows from the user ROWS = 4
	1 
	1 4 
	4 7 10 
	10 13 16 19 
	19 22 25 
	25 28 
	28 	
 */

#include<stdio.h>
void main(){


	int row;
	int col;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	int num=1;
	for(int i=1;i<2*row;i++){
		if(i<=row){
		
			col = i;
		}else
			col = 2*row-i;
	
		for(int j=0;j<col;j++){
		
			printf("%d ",num);
			num = num+3;
		}
		printf("\n");
		num = num-3;
	}
	

}
