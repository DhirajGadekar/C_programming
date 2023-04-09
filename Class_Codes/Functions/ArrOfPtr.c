//Array of Pointer :

#include<stdio.h>

void add(int a, int b){

	printf("%d\n",a + b);

}
void sub(int a, int b){

	printf("%d\n",a - b);

}
void mult(int a, int b){

	printf("%d\n",a * b);

}
void div(int a, int b){

	printf("%d\n",a / b);

}

void main() {
	void (*ptr[4])(int ,int) = {add,sub,mult,div};
	
	for(int i = 0;i < 4;i++){
		ptr[i](30,20);
	}
}
