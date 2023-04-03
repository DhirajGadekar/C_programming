/*
 4. If possible take no of rows from the user
	A B C
	D E F
	G H I
 */

#include<stdio.h>

void main() {
	char ch = 'A';

	for(int i = 1;i <= 3;i++){
		for(int j = 1;j <= 3;j++){
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
} 
