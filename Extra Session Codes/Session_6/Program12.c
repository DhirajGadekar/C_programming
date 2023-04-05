/*
 5. Take no of rows from the user ROWS = 4
    A b C d
      e G i
        K n
          q
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
			if((i+j) % 2 == 0){
				printf("%c\t",ch2);
				ch1 += i;
				ch2 += i;
			}else{
				printf("%c\t",ch1);
				ch1 += i;
				ch2 += i;
			}
		}
		printf("\n");
	}
}
