/*
 9. take no of rows from the user
      1
    1 2
  1 2 3
1 2 3 4
 */

#include<stdio.h>

void main(){
	
	int row;

	printf("Enter the row number :");
	scanf("%d",&row);

	for(int i = 1;i <= row ;i++){
		for(int sp = row -1;sp >= i;sp--){
			printf("  ");
		}
		for(int j = 1;j <= i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
