/*2.WAP that dynamically allocates a 1-D Array of marks, takes value from the
user, and prints it. [use malloc()]
Draw a diagram on a notebook. */

#include<stdio.h>
#include<stdlib.h>

void main() {

	int size;
	printf("Enter the size of array : ");
	scanf("%d",&size);

	float *marks = (float*)malloc(size*sizeof(float));
		
	printf("Enter the marks :\n");
	for(int i = 0;i < size;i++){
		
		scanf("%f",&marks[i]);
	}

	printf("Marks :\n");
	for(int i = 0;i < size;i++){
		
		printf("%f\n",*(marks+i));
	}
	free(marks);

}
