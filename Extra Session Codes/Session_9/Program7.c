/*7. Take number of rows from the user
	1
	1 2 3
	1 2 3 4 5 6 
	1 2 3 
	1
*/
#include<stdio.h>
void main(){

	int row;
	int col=1;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	int x= row + (row-1);
	for(int i=1;i<=x;i++){
		int num=1;
		for(int j=0;j<col;j++){
		
			printf("%d ",num);
			num++;
		}
		if(i<row){
			col = col+2;
		}else
			col = col -2;
		printf("\n");
	}
}
