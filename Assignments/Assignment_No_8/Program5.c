/*
 5. take no of rows from the user
	2  3  5
	7  11 13
	17 19 23
 */

#include<stdio.h>

void main(){
	
	int row,count,x;
	
	printf("Enter the row ::");
	scanf("%d",&row);
	printf("Enter the row ::");
        scanf("%d",&x);

	for(int i = 1;i <= row;i++){
		for(int j = 1;j <= row;j++){
			count = 0;
			for(int k = 1;k <= x;k++){
				if(x % k  == 0){
					count++;
				}
			}
			if(count == 2){
				printf("%d",x);
			}
			x++;
		}
		printf("\n");
	}
}
