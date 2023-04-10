/*
  3.WAP which shows the concept of Pointer to an array.
 */

#include<stdio.h>

void main() {
	int arr[] = {10,20,30,40,50};

	int (*ptr)[5] = &arr;

	printf("%p\n",ptr);
	printf("%p\n",*ptr);

	for(int i = 0;i < 5;i++){
		printf("%d\n",*((*ptr) + i));
	}
	
}
/*
Diagram  :


	 ___________________________________________________
	|                                                   |
	|  arr1[  10  ][  20  ][  30  ][  40  ][  50  ]     |
	|      100     104     108     112     116    119   |
	|                                                   | ⇨ Main Stack Frame  
	|  ptr[ 100 ]                                       |
	|     200   207                                     |   
	|___________________________________________________|
	|                                                   |
	.                    Heap Section                   .
	|___________________________________________________|
	|                                                   |
	|                    Data section                   |
	|___________________________________________________|
	|                                                   |
	|                    Text Section                   |
	|___________________________________________________|
	

 	ptr store the address of whole 2D array.

	*((*ptr) + i )
        *ptr = value at ptr = 100 	
	*(100 + 0 * 4) =  10
	*(100 + 1 * 4) =  20
	*(100 + 2 * 4) =  30
	*(100 + 3 * 4) =  40
	*(100 + 4 * 4) =  50
 */
