/*
 8. take no of rows from the user
	16 15 14 13
	L  k  G  I
	8  7  6  5
	D  C  B  A
 */

#include<stdio.h>

void main(){
        
        int row;

	printf("Enter the Row :");
	scanf("%d",&row);

	char ch = 64 + (row * row);
        int x = row * row;

	for(int i = 1 ; i<= row;i++){
		for(int j = 1;j <= row;j++){
			if(i % 2 == 1){
				printf("%d\t",x);

			}else{
				printf("%c\t",ch);
				
			}
			ch--;
			x--;
			
		}
		printf("\n");
	}
}	
