/*
 4. take no of rows from the user
	* - - -
	- * - -
	- - * -
	- - - *
 */

#include<stdio.h>

void main(){
	int row;

	printf("Enter the Row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++){
		for(int j = 1;j <= row;j++){
			if(i == j){
				printf("* ");
			}
			else{
				printf("- ");
			}
		}
		printf("\n");
	}
}
