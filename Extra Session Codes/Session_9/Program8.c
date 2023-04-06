/*
 Take rows from user ROW : 4
 	D
 	C  D
 	B  C  D
	A  B  C  D
	B  C  D
 	C  D
 	D
 */
#include<stdio.h>
void main(){

	int row;
	printf("Enter number of rows : ");
	scanf("%d",&row);
	
	for(int i=1;i<=row*2-1;i++){
		if(i<=row){
			char ch = 65+(row-i);
			for(int j=1;j<=i;j++){
				printf(" %c ",ch);
				ch++;
			}
		}else{
			char ch = 65+(i-row);
			for(int j=1;j<=(row*2)-i;j++){
				printf(" %c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
