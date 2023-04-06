/*
 7. Take no of rows from the user ROWS = 5
		1
              4 7 4
           7 10 13 10 7
       10 13 16 19 16 13 1
 */

#include<stdio.h>

void main() {
	int row,num;
	printf("Enter the no of row :");
	scanf("%d",&row);	
	
	for(int i= 1;i <= row;i++){
		num = i * 3 - 2;
		for(int sp = row;sp >= i;sp--){
			printf("\t");
		}
		for(int j = 1;j <= 2*i-1;j++){
				
			if(j < i){
				printf("%d\t",num);
				num += 3;
			}else{
				printf("%d\t",num);
				num -= 3;	
			}
			
		}

		printf("\n");
	}
}
