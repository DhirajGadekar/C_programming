/*
 10. Take no of rows from the user ROWS = 4
     1 3 5 7 9
       9 7 5 3
         3 5 7
           7 5
             5
 */

#include<stdio.h>

void main() {
	
	int row,num = 1 - 2;
	printf("Enter the Number row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++) {
		
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			if(i % 2 == 1){
				num += 2;
				printf("%d\t",num);
			        
			}else{
				
				printf("%d\t",num);
				num -= 2;
			}
		}
		printf("\n");
	}
}
