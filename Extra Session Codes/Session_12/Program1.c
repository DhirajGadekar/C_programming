/*
 1. WAP to create array of size n given by user and take values from
    user and print array using pointer.
 */

#include<stdio.h>

void main() {
	int size;
	printf("Enter the size of array :");
	scanf("%d",&size);
	
	int arr[size];
	printf("Enter the element of array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Element of array :\n");
	for(int i =0;i < size;i++){
		printf("%d\n",*(arr + i));
	}

}


/*
Diagram :

	arr[  1  ][  2  ][  3  ][  4  ][  5  ]
	   100    104    108    112    116   119 →  Virtual Addresses

	   *(arr + i)
	   *(100 + 0) = *(100 + 0 * Datatype of pointer)=*(100+0*4)
	   *(100) = value at 100 = 1

	   *(100 + 1) = *(100 + 1 * 4) = *(104) = 2	
	   *(100 + 2) = *(100 + 2 * 4) = *(108) = 3
	   *(100 + 3) = *(100 + 3 * 4) = *(112) = 4
	   *(100 + 4) = *(100 + 4 * 4) = *(116) = 5
 */
