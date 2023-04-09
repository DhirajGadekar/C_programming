/*
 4). WAP of every type of pointer and draw a suitable diagram of that. (Wild pointer, null pointer, dangling pointer,
     void pointer)
 */

#include<stdio.h>

int *ptr1 = NULL;                       //NULL Pointer

void fun() {
	int num = 20;
	ptr1 = &num;                    //Dangling Pointer
	
	int *ptr2;                      //WILD Pointer
	printf("%d\n",*ptr2);

	printf("%p\n",ptr1);
	printf("%p\n",&num);

}
void main() {
	fun();
	printf("%d\n",*ptr1);

	int num = 12;

	void *ptr3 = &num;              //VOID Pointer

	printf("%d\n",*((int*)ptr3));
}
