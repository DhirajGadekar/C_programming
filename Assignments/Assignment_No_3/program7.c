#include<stdio.h>

void main(){
        int start ,end1,end2,ComNum,LCM;

        printf("Enter the Start Number :");
        scanf("%d",&start);
        printf("Enter the any two Number :\n");
        scanf("%d %d",&end1,&end2);

        for(int i = start ;i <= end1 && i <= end2;i++){
                if(end1 % i == 0 && end2 % i == 0){
                	ComNum = i;
                }
        }
	LCM = (end1 * end2)/ComNum;
	printf("LCM of %d and %d is %d \n",end1 ,end2,LCM);

} 
