#include<stdio.h>

void main(){
	char ch1 = 'A';      //100
	char ch2 = 'B';      //101
	char ch3 = 'C';      //102

	char *ptr1 = &ch1;
	char *ptr2 = &ch2;
	char *ptr3 = &ch3;
	
	printf("%p\n",ptr1);      //100
	printf("%c\n",*ptr1);     //B

	printf("%p\n",ptr2++);     //101
	printf("%p\n",ptr2);       //102
	printf("%c\n",*ptr2);      //C

	printf("%p\n",++ptr3);  //104
	printf("%c\n",*ptr3);       //garbage value or segmentation fault

}
