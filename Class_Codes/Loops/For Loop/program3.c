#include<stdio.h>

void main(){
	char ch = 'A';
	int x = 1;
	for(int i = 1;i <= 3 ;i++){
		for(int j = 1 ; j <= 3 ;j++){
			if(x % 2 == 0){
				printf(" * ");
				x++;
			}
			else{
				printf(" %c ",ch);
				ch+=2;
				x++;
			}
		}
		printf("\n");
	}
}
