/*
 2. If possible take no of rows from the user
	1 2 3
	a b c
	1 2 3
	a b c
 */

#include<stdio.h>

void main() {
	
//	int x = 1;
//	char ch = 'a';
	for(int i = 1;i <= 4; i++){
		int x = 1;
        	char ch = 'a';
	
		for(int j = 1; j <= 3;j++){
			if(i % 2 == 1){
				printf("%d ",x);
				x++;
			}else{
				printf("%c ",ch);
				ch++;
			}	
		}
		printf("\n");
	}
}
