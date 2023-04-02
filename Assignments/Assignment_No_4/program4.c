#include<stdio.h>

void main() {

        int x,start ,end ,count = 0;

	//printf("Enter the number :");
        //scanf("%d",&start);
	
	printf("Enter the number :");
        scanf("%d",&end);
	
	//printf("Enter the number :");
        //scanf("%d",&x);

	
        for(int i = 2; i <= end ; i++){
		   if(end % i == 0){
			count++;
		  }	
	
	}
	if(count == 1){
              printf("%d is prime number \n",end);

        }else{
              printf("%d is not prime number \n",end);

        }

	


}

