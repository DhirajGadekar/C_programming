/*
 9. Take no of rows from the user ROWS = 5
		5
	      5 6 5
	    5 4 3 4 5
 	  5 6 7 8 7 6 5
	5 4 3 2 1 2 3 4 5
 */

#include<stdio.h>

void main() {
	int row,num;
	printf("Enter the no of row :");
	scanf("%d",&row);
	
	
	for(int i= 1;i <= row;i++){
		
	        num = row;
		for(int sp = row;sp >= i;sp--){
			printf("  ");
		}
		for(int j = 1;j <= 2*i-1;j++){
			if(i % 2 == 0){

				if(j < i){
				
					printf("%d ",num);
					num++;
				
				}else{
					printf("%d ",num);
					num--;
					
				}
				
			}else{
				
				if(j < i){
				
					printf("%d ",num);
					num--;
				
				}else{
					printf("%d ",num);
					num++;
				}
				
			}
			
		}

		printf("\n");
	}
}
