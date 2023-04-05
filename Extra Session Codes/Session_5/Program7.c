/*
 7. Take no of rows from the user ROWS = 5

                 A
	     b	 a
	 C   E   G
     d	 c   b   a
  E  G   I   K   M

 */

#include<stdio.h>

void main() {
	int row;
	printf("Enter the rows ::");
	scanf("%d",&row);
	
	char ch1,ch2;
	
	for(int i = 1;i <= row;i++){
		ch2 = 96 + row;	
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
			if(i % 2 == 0){
				ch2--;
			}
		}
		ch1 = 64 + i;
		for(int j = 1;j <= i;j++){
			
			if(i % 2 == 1) {
				
				printf("%c\t",ch1);
				ch1 += 2;
				
			}
			else{
				printf("%c\t",ch2);
				ch2--;
			}
		}
	
		printf("\n");

	}
}
