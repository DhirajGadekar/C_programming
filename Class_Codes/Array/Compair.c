// Compairing Array


#include<stdio.h>

void main() {
	
	int arr1[3]={12,13,14};
	int arr2[3]={12,13,11};
	int flag = 0;

	for(int i = 0;i < 3;i++){
		if(arr1[i] == arr2[i]){
			flag = 1;
		}
		else{
			flag = 0;
		}
	}
	if(flag == 1){
		printf("Arrays are Equal\n");
	}else{
		printf("Array are Not Equal\n");
	}
}
