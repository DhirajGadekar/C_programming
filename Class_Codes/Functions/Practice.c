#include<stdio.h>

void fun (int *ptr1,int *ptr2) {
	int temp = 0;

	temp = *ptr1;
	*ptr1= *ptr2;
	*ptr2=temp;

	printf("x = %d\n",*ptr1);
	printf("y = %d\n",*ptr2);

}
void main () {
	int x = 10,y = 20;
	
	printf("x = %d\n",x);
	printf("y = %d\n",y);
	
	int *ptr1 = &x;
	int *ptr2 = &y;

	fun(&x,&y);

	printf("x = %d\n",x);
	printf("y = %d\n",y);
}
