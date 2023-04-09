#include<stdio.h>

struct Movie{
	char mName[20];
	int count;
	float prise;

}obj = {"Kantara",4,450.50};

void main(){
	printf("%s\n",obj.mName);
	printf("%d\n",obj.count);
	printf("%f\n",obj.prise);
}

