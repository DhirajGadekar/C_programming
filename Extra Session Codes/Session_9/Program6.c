/* 6.Take number of rows from the user
	*
	*  *  *
	*  *  *  *  *
	*  *  *
	*    
*/
#include<stdio.h>
void main(){

	int row;
	int col=1;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	int x= row + (row-1);
	for(int i=1;i<=x;i++){
		for(int j=0;j<col;j++){
		
			printf("* ");
		}
		if(i<row){
			col = col+2;
		}else
			col = col -2;
		printf("\n");
	}
}
