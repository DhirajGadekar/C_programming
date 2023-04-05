/*
 5. Take no of rows from the user ROWS = 4
    a B c D
      E f G
        h I
          J
 */

#include<stdio.h>

void main() {
	
	int row,num = 1;
	printf("Enter the Number row ::");
	scanf("%d",&row);
	char ch1 = 65;
	char ch2 = 97;
	for(int i = 1;i <= row;i++) {
		
		for(int sp = 1;sp < i;sp++){
			printf("\t");
		}
		for(int j = row;j >= i;j--){
			if(i % 2 == 0){

				if(j % 2 == 1){
					printf("%c\t",ch1 + 32);
					ch1++;
					ch2++;
					
				}else{
					printf("%c\t",ch2 - 32);
					ch1++;
					ch2++;
				}
			}else{

				if(j % 2 == 1){
					printf("%c\t",ch1);
					ch1++;
					ch2++;
				}
				else{
					printf("%c\t",ch2);
					ch1++;
					ch2++;
				}
			}
		}
		printf("\n");
	}
}
