#include<stdio.h>

void main() {
	int x = 1;

	for(int i = 1;i <= 3 ; i++){
		for(int j = 1;j <= 3; j++){
			printf("%d\t",x);
			x++;
		}
		printf("\n");
	}
}
