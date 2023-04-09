//Object Initialization by using malloc

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct IPL{
	
	char pName[20];
	int Totteam;
	float price;
};

void main(){

	struct IPL *ptr = (struct IPL *)malloc(sizeof(struct IPL));

	strcpy((*ptr).pName,"TATA");
	(*ptr).Totteam = 10;
	ptr->price = 100.00;

	printf("%s\n",(*ptr).pName);
	printf("%d\n",(*ptr).Totteam);
	printf("%f\n",ptr->price);
}
