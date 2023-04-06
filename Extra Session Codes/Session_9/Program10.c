/*10.Take number of rows from the user
 1
 2 4
 3 6 9 
 4 8 12 16
 3 6 9 
 2 4 
 1     */
#include<stdio.h>
void main(){

	int row;
	printf("Enter the number of rows : ");
	scanf("%d",&row);
	int num = 1;
	int col;
	for(int i=1;i<=2*row-1;i++){
		
		if(i<=row){
			col = i;
		int num=col;
		}else
			col = 2*row-i;
			int num = col;
		for(int j=1;j<=col;j++){
			printf("%d ",num);
			num = num+col;
		}
		num=i+1;
		printf("\n");
	}
}
