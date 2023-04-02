#include<stdio.h>

void main() {

        int num1,num2,x,count=0,sum =0;

        printf("Enter the start number :");
        scanf("%d",&num1);

        printf("Enter the end number :");
        scanf("%d",&num2);
	
	printf("Enter the number :");
        scanf("%d",&x);
		

	printf("the Divisior are :");
        for(int i = num1 ;i <= num2 ;i++){
                if(x % i == 0){
			printf("%d \n",i);
			count++;
			sum=  sum+ i;
			
		}
		
        }
	printf("the count of Divisior = %d \n",count);
	printf("the sum of Divisior = %d \n",sum);


}

