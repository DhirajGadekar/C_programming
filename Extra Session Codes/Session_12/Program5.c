/*
 5.WAP to create array of size n given by user and take the value from
   user sort the array in ascending order and print the sorted array.
 */

#include<stdio.h>

void main() {
	int size,temp = 0;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	int arr[size];
	printf("Enter the element of array :\n");
	for(int i = 0;i < size;i++){
		scanf("%d",&arr[i]);
	}

	printf("Element of the array :\n");
	for(int i = 0;i < size;i++){
		printf("%d\n",*(arr + i));
	}

	printf("Array in ascending order : \n");
	for(int i = 0;i < size;i++){
		for(int j = i + 1;j < size;j++){
			
			if(arr[i] > arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
		printf("%d\n",arr[i]);
	}
}

/*
 Dry Run of ascending order :
	size = 4
	arr[4] = {1,3,2,4}

 	i = 0   i < 4  j = i + 1  j < 4 if(arr[i] > arr[j]) temp=arr[i] arr[i]=arr[j] arr[j]=temp j++ printf(arr[i]) i++
	_______________________________________________________________________________________________________________
	i = 0   0 < 4  j = 1      1 < 4         1 > 3         -       	      -           -        2        -         -
	                          2 < 4         1 > 2         -               -           -        3        -         -
				  3 < 4         1 > 4         -               -           -        4        -         -
				  4 < 4           -           -               -           -        -   arr[0] = 1     1
	_______________________________________________________________________________________________________________
                                                            temp=arr[1]	arr[1]=arr[2] arr[2]=temp
		1 < 4  j = 2      2 < 4		3 > 2       temp=3      arr[1]=2      arr[2]=3     3        -         -
	                          3 < 4         3 > 4         -              -            -        4        -         -
			          4 < 4           -           -              -            -        -   arr[1] =	2     2  
	_______________________________________________________________________________________________________________
                                                            temp=arr[2]	arr[2]=arr[3] arr[3]=temp
		2 < 4  j = 3      3 < 4		2 > 4         -              -            -        3        -         -
	                          4 < 4           -           -              -            -        4   arr[2] = 3     3
	_______________________________________________________________________________________________________________
                                                            temp=arr[3]	arr[3]=arr[4] arr[4]=temp
		3 < 4  j = 4      4 < 4           -           -              -            -        -   arr[3] = 4     4
	_______________________________________________________________________________________________________________
  	
                4 < 4   -           -             -           -              -            -        -        -         -
	_______________________________________________________________________________________________________________
                                                            
*/
