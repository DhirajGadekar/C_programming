/*
 3. WAP to print all even numbers in reverse order and odd numbers in the standard
way. Both separately. Within a range.
 */
#include<stdio.h>

void main(){
	int start ,end;

	printf("Enter the Start Number :");
	scanf("%d",&start);
	printf("Enter the End Number :");
        scanf("%d",&end);
	
	printf("all even numbers in reverse order :\n");
	for(int i = end ;i >= start;i--){
		if(i % 2 == 0){
			printf("%d\n",i);
		}
	}
	
	printf("odd numbers in the standard :\n");
	for(int i = start ;i <= end;i++){
                if(i % 2 == 1){
			printf("%d\n",i);
                }
        }


}
