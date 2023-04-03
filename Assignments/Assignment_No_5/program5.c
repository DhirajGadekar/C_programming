/*
 5. If possible take no of rows from the user
	A B C D
	B C D E
	C D E F
	D E F G
 */
#include<stdio.h>

void main() {
        char ch = 'A';
        for(int i = 1;i <= 4;i++){
                for(int j = 1;j <= 4;j++){
                	printf("%c ",ch);
			ch++;
                }
		ch -= 3;
                printf("\n");
        }
}
