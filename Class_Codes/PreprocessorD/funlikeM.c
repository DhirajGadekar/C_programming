//Function Like Macros


#include<stdio.h>

#define Add(a,b) a+b
#define sqr(x) x*x

void main() {
	
	int x = 12,y = 15;

	printf("%d\n",Add(x,y));
	printf("%d\n",sqr(x));

}
