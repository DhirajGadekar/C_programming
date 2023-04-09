#include<stdio.h>

void main() {
	
	char carr[] = {'C','o','r','e','2','w','e','b'};

	char *str = "Core2web";

	printf("%s\n",carr);
	printf("%s\n",str);

	carr[4] = 'V';
	printf("%s\n",carr);

	//*str = 'B'; 
	//printf("%s\n",str);     segmentation fault(core dumped)
	
	(*str[3])[8] = 'B';
	printf("%s\n",str);
}
