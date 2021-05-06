//A program that returns a pointer to n consecutive character positions

#include<stdio.h>

char *alloc(int n){
	char mem[n];
//	char *charp = mem;
	return mem;

//	return charp;

}

int main(){
	int memsize = 2000;
	char *p = alloc(memsize);
	printf("size of allocated memory: %d\n", sizeof(*p));

	//
	//
	p = "All is well";
	for(int i = 0; i!='\0'; i++)
		printf((p+i));
	printf("\n");
	return 0;
}
