//Conditional Preprocessing


#include<stdio.h>

#define access 0
void main() {

	#if access
	printf("Access per...\n");
        #else
	printf("Not Access ...\n");
	
	#endif
}
