#include<stdio.h>
#include<string.h>

struct CriPlayer{
	char pName[20];
	int pmatches;
	float rev;

};

void main(){
	struct CriPlayer obj;

	strcpy(obj.pName,"Virat Kohli");
	obj.pmatches = 102;
	obj.rev = 999.90;
	printf("%s\n",obj.pName);
	printf("%d\n",obj.pmatches);
	printf("%f Cr\n",obj.rev);
}

