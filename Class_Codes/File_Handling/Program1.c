#include<stdio.h>

void main() {

	printf("%d\n",stdin->_fileno);
	printf("%d\n",stdout->_fileno);
	printf("%d\n",stderr->_fileno);
}
