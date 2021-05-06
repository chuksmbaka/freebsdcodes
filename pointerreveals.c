#include<stdio.h>

int main(){
	//single pointer to a variable
	int var = 100;
	printf("var: %d\n", var);
	printf("&var: %u\n", &var);

	//
	int *varp = &var; //varp contain memoy address of var
	printf("varp: %u\n", varp);
	printf("&varp: %u\n",&varp);
	printf("*varp: %d\n", *varp);

	//double pointer
	printf("\nDouble pointer.....");
	int var2 = 400;
	printf("var2: %d\n", var);
	printf("&var2: %u\n", &var2);

	//single pointer
	int *var2p = &var2;
	printf("var2p: %u\n", var2p);
	printf("&var2p: %u\n",&var2p);
	printf("*var2p: %d\n", *var2p);

	int **var2pp = &var2p;
	printf("var2pp: %u\n", var2pp);
	printf("&var2pp: %u\n",&var2pp);
	printf("*var2pp: %u\n", *var2pp);
        printf("**var2pp: %d\n", **var2pp);


	

	


	return 0;

}
