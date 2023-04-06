/*
9. Take no of rows from the user ROWS = 4
	A0 B1 C2 D3 E4 F5 G6
	   H2 I3 J4 K5 L6
	      M4 N5 O6
	         P6 
 */

#include<stdio.h>

void main() {

	int row,num;
	printf("Enter the no of row :");
	scanf("%d",&row);
	char ch = 65;
	num = 0;
	for(int i = 1;i <= row;i++){
		 
		for(int sp = 1 ;sp < i;sp++){
			printf("\t");
		}

		for(int j = 2*row-2*i+1; j >= 1;j--){
			printf("%c%d\t",ch,num);
			ch++;
			num++;
		}
		num = i + i;
		printf("\n");
	}

}
