#include<stdio.h>

void main(){

	int x;
	printf("Enter the points :");
	scanf("%d",&x);

	if( x >= 0 && x <= 100){
		printf("Level Of Ninja is Genin\n");
	}
	else if( x >= 100 && x <= 500){
                printf("Level Of Ninja is Chunin\n");
        }
	else if( x >= 500 && x <= 1000){
                printf("Level Of Ninja is Jonin\n");
        }
	else if( x >= 1000){
                printf("Level Of Ninja is Hokage\n");
        }


}

