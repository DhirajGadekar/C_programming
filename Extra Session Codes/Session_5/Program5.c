/*
 5. Take no of rows from the user ROWS = 4

                 D
	     c	 D
	 B   c   D
     a	 B   c   D

 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the rows ::");
	scanf("%d",&row);
	
	char ch1;
	char ch2;
	
	for(int i = 1;i <= row;i++){
		ch1 = 65;
		ch2 = 97;
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
			if(sp % 2 == 1){
				ch1++;
				ch2++;
			}else{
				ch2++;
				ch1++;
			}
		}

		for(int j = 1;j <= i;j++){
			if(i % 2 == 0){

				if(j % 2 == 1) {
					printf("%c\t",ch1 + 32);
					ch1++;
					ch2++;
				}else{
					printf("%c\t",ch2 - 32);
					ch2++;
					ch1++;
				}
			}else{
		
				if(j % 2 == 1) {
					printf("%c\t",ch1);
					ch1++;
					ch2++;
				}else{
					printf("%c\t",ch2);
					ch2++;
					ch1++;
				}
			}
		}
		printf("\n");

	}
}
