/*
4. Take no of rows from the user ROWS = 4
 	      4
	    4 3 4
	  4 3 2 3 4
	4 3 2 1 2 3 4
 */

#include<stdio.h>
void main(){
    	int row,num;
    	printf ("Enter the row :");
    	scanf ("%d",&row);
    
    	for(int i = 1;i <= row;i++){
        	num = row;
        	for(int sp = row;sp>i;sp--){
            		
			printf ("  ");
        	}
        
		for(int j = 1;j <= 2 * i - 1;j++){
            		
			if(j < i){
              			printf ("%d ",num);
              			num--;
            		}else{
                		printf ("%d ",num);
                		num++;
            		}
        	}
        	printf ("\n");
    	}
}



