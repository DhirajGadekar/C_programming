#include<stdio.h>

struct Demo{
	
	int x:4;
	float y;

};

void main(){

	struct Demo Obj = {13,12.34};

	printf("%d\n",Obj.x);
	printf("%f\n",Obj.y);
}
