// * A *
// B * C
// * D *

#include<stdio.h>

void main(){

	int i,j;
	int x = 1;	
	char ch = 'A';
	for(i = 1; i <= 3; i++){
		
		for(j=1; j<= 3; j++){

			if(x%2== 0){
				printf("%c ",ch++);
				x++;
			}
			else{
				printf("* ");
				x++;
			}
		}
		printf("\n");
	}
}
