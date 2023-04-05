/*
 10.Take no of rows & col from the user  ROWS = 4

 	                        1
	                4       9
	        64      125     216
	2401    4096    6561    10000
 */

#include<stdio.h>

int pattern(int row,int num){
	int mul = 1;
	for(int i = 1; i <= row;i++){
		mul *= num;
	}
	return mul;

}
void main() {
	int row,num = 1;
	printf("Enter the row ::");
	scanf("%d",&row);

	for(int i = 1;i <= row;i++){
		for(int sp = row;sp > i;sp--){
			printf("\t");
		}
		for(int j = 1;j <= i;j++){
			int ans = pattern(i,num);
			printf("%d\t",ans);
			num++;
		}
		printf("\n");
	}
}
