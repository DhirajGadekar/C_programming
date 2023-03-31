/* 
 a c e
 g i k
 m o q
*/

#include<stdio.h>

void main(){
	 int x = 97;

	 for(int i = 1 ; i <= 3; i++){
		
		 for(int j = 1;j<= 3;j++){
			 printf("%c ",x);
			 x = x + 2;
			
		 }
		 printf("\n");
	 }
}
