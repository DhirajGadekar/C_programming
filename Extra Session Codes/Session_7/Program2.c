/*
 2. Take no of rows from the user ROWS = 4
	      4
	    3 3 3
	  2 2 2 2 2
	1 1 1 1 1 1 1
 */

#include<stdio.h>
void main(){
	int row;
    	printf ("Enter the row :");
    	scanf ("%d",&row);
    	int num = row;

    	for(int i = 1;i <= row;i++){
        	
		for(int sp = row;sp>i;sp--){
            		
			printf ("  ");
        	}
        	
		for(int j = 1;j <= 2 * i - 1;j++){
            		
			printf ("%d ",num);
        	}
        	num--;
        	printf ("\n");
    	}
}
