//Pointer to Structure

#include<stdio.h>

struct Movie{
	char mName[20];
	int count;
	float price;
}obj = {"Tumbbad",5,950.50};

void main() {

	struct Movie *sptr = &obj;

	printf("%s\n",(*sptr).mName);
	printf("%d\n",(*sptr).count);
	printf("%f\n",(*sptr).price);
}
