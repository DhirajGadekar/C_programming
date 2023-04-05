/*
 8. Take no of rows from the user ROWS = 4

                 1
	     A	 b
	 1   2   3
     A	 b   C   d

 */

#include<stdio.h>

void main() {
	int row,num;
	printf("Enter the rows ::");
	scanf("%d",&row);
	char ch1,ch2;

	for(int i = 1;i <= row;i++){
		num = 1;
		ch1 = 65;
		ch2 = 97;
		for(int sp = row -1;sp >= i;sp--){
			
			printf(" \t");
		}

		for(int j = 1;j <= i;j++){
			
			if(i % 2 == 1){
				printf("%d\t",num);
				num++;
			}else{
				if( j % 2 == 1){
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
