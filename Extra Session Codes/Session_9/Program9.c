/*9. Take number of rows from the user
 	1
 	3 2 1
 	5 4 3 2 1
 	3 2 1
 	1
 */
#include<stdio.h>
void main(){

	int row;
	int col=1;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	int num = 1;
	int x= row + (row-1);
	for(int i=1;i<=x;i++){
		for(int j=0;j<col;j++){
		
			printf("%d ",num);
			num--;
		}
		if(i<row){
			col = col+2;
		}else
		
			col = col -2;

		printf("\n");
		num = col;
	}
}
