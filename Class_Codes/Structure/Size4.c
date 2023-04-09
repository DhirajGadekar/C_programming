#include<stdio.h>
#pragma pack(1)
struct Demo{
	char ch1;
	int x;
	float y;
	double arr[5];
};

void main(){
	
	printf("%ld\n",sizeof(struct Demo));
}
