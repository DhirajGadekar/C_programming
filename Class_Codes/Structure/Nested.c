//Nested Structure


#include<stdio.h>
#include<string.h>

struct MovieInfo{
	char acter[20];
	float imbd;

};
struct Movie{

	char mName[20];
	struct MovieInfo Obj1;
};

void main(){

	struct Movie Obj3;

	struct Movie Obj2 = {"Kantara",{"Rishabh",8.8}};     // Type 1
	strcpy(Obj3.mName,"Tumbbad");
	strcpy(Obj3.Obj1.acter,"Sohan");
	Obj3.Obj1.imbd = 9.7;

	printf("%s\n",Obj2.mName);
	printf("%s\n",Obj2.Obj1.acter);
	printf("%f\n",Obj2.Obj1.imbd);
	
	printf("%s\n",Obj3.mName);
	printf("%s\n",Obj3.Obj1.acter);
	printf("%f\n",Obj3.Obj1.imbd);
}
