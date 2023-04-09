//Array Of Struct

#include<stdio.h>

struct player{

	char pName[20];
	int jerNo;
	float rev;
};

void main(){

	struct player obj1 = {"Ronaldo",7,5000.00};
	struct player obj2 = {"Virat Kohli",18,2300.00};

	struct player arr[2] = {obj1,obj2};

	for(int i = 0;i < 2;i++){
		printf("%s\n",arr[i].pName);
		printf("%d\n",arr[i].jerNo);
		printf("%f\n",arr[i].rev);
	}
}
