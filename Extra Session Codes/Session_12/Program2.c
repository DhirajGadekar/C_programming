/*
  2.WAP which explain the concept of array of pointer.
 */

#include<stdio.h>

void main() {
	int arr1[] = {10,20,30,40,50};

	int* arr2[] = {&arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4]};
	
	printf("%p\n",arr2);
	
	//Addresses of the Pointers
	printf("Addresses of the Pointers :\n");
	for(int i = 0;i < 5;i++){
		
		printf("%p\n",&arr2[i]);
	}

	//Addresses of the Element
	printf("Addresses of the element :\n");
	for(int i = 0;i < 5;i++){
		
		printf("%p\n",arr2[i]);
	}

	//Dereferencing the array of pointers
	printf("Element of the array :\n");
	for(int i = 0;i < 5;i++){

		printf("%d\n",*((*arr2) + i));
	}

}
/*
Diagram  :


	 ___________________________________________________
	|                                                   |
	|  arr1[  10  ][  20  ][  30  ][  40  ][  50  ]     |
	|      100     104     108     112     116    119   |
	|        ↘        ↘      ↘       ↘       ↘          | ⇨ Main Stack Frame  
	|  arr2[  100 ][  104 ][  108 ][  112 ][  116 ]     |
	|      200     208     216     224     232    239   |
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

 	
	*((*arr2) + i )
        *arr2 = value at arr2 = 100 	
	*(100 + 0 * 4) =  10
	*(100 + 1 * 4) =  20
	*(100 + 2 * 4) =  30
	*(100 + 3 * 4) =  40
	*(100 + 4 * 4) =  50
 */
