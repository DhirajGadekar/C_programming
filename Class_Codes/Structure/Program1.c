#include<stdio.h>

struct CricPlayer{
	int jerNo;
	char grade;
	float avg;
};
void main() {
	struct CricPlayer Obj;

	printf("%ld\n",sizeof(Obj));
	printf("%ld\n",sizeof(struct CricPlayer));
}
