/*
 7. take no of rows from the user
	E D C B A
	E D C B
	E D C
	E D
	E
 */

#include<stdio.h>

void main(){
	int row;

	printf("Enter the row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++){
		char ch = 'E';
		for(int j = row;j >= i;j--){
			printf("%c ",ch);
			ch--;
		}
		printf("\n");
	}
}
