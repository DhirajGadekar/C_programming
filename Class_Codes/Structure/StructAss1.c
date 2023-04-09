#include<stdio.h>

struct Movie{
	char mName[20];
	int count;
	float prise;

};

void main(){
	struct Movie obj = {"Kantara",4,450.50};
	printf("%s\n",obj.mName);
	printf("%d\n",obj.count);
	printf("%f\n",obj.prise);
}

