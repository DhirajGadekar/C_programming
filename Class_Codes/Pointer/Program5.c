/*
 5.Draw a neat diagram,output and arithmatic explaination of below code. 
 */

#include<stdio.h>

void main () {
	
	int arr[] = {10,20,30,40,50};

	int *ptr1 = &arr[1];
	int *ptr2 = &arr[2];
	
	printf("%p\n",ptr1);                         //Address of 2nd Element (20)
	printf("%p\n",ptr2);                         //Address of 3rd Element (30)
	
	ptr1++;
	--ptr2;
	
	printf("%d\n",*ptr1);                        //30
	printf("%d\n",*ptr2);                        //20

	printf("%ld\n",(ptr1 - ptr2) + 2);           //3
	printf("%p\n",ptr2 + (ptr1 - ptr2));         //Address of 3rd element (30)
	printf("%d\n",*(ptr2 + (ptr1 - ptr2)));	     //30				     
	
	printf("%p\n",(ptr1*2));                     //Error : Invalid Operator
	printf("%d\n",*(ptr1 * ptr2));               //Error : Invalid Operator
	printf("%p\n",ptr1 / 2);                     //Error : Invalid Operator
}
