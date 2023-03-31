
#include<stdio.h>

void main(){

	for(int i = 1;i <= 5;i++){
		for(int j = 1;j <= 5;j++){
			for(int sp = 4;sp >= i;sp--){
				printf("%d",sp);
			}
		}
		printf("\n");
	}
}
