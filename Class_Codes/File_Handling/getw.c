//EOF

#include<stdio.h>

void main() {
	
	FILE *fp = fopen("Demo3.txt","w");

	printf("%d\n",getw(fp));
	printf("%d\n",EOF);
}
