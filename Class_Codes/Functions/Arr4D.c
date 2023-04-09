#include<stdio.h>

void main(){
	int arr3D[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

	int arrSize = sizeof(arr3D) / sizeof(int);

	for(int i = 0 ; i < arrSize;i++){
		printf("%d\n",*(**arr3D + i));
	}
}
