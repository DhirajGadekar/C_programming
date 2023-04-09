// Typedef

#include<stdio.h>

typedef struct Twitter_Model1{
	
	int x;
	float y;
	char mName[20];
}tweet;

void main(){

	tweet obj = {12,12.43,"Virat kohli"};

	printf("%d\n",obj.x);
	printf("%f\n",obj.y);
	printf("%s\n",obj.mName);
}
