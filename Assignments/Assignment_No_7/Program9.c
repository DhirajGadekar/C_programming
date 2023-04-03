/*
 9. take no of rows from the user
	0   1   1   2
	3   5   8   13
	21  34  55  89
	144 233 377 610
 */

#include<stdio.h>

void main(){
        
        int row ,n1 =0,n2 = 1;

        for(int i = 1;i <= 4 ; i++){

                for(int j = 1; j <= 4 ; j++){
			
			printf("%d\t",n1);
			n2 = n1 + n2;
			n1 = n2 - n1;

		}
		printf("\n");

	}
}
