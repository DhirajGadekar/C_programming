#include<stdio.h>
#include<string.h>

void main() {
	char arr[] = "Dhiraj Gadekar";
	char arr1[] = "Gadeakr";
	char *str = "Dhiraj";

	puts(arr);
	puts(str);

	printf("%p\n",arr);
	printf("%p\n",arr1);
	printf("%p\n",str);

	printf("%ld\n",strlen(arr));

}
