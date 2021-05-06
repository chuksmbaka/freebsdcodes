#include<stdio.h>

int main(){
	int A[] = {2, 4, 5, 8, 1};
	for(int i = 0; i<5; i++){	
		printf("Using array name...\n");
		printf("A: %u\n", A+i);
		printf("&A[0]: %u\n", &A[i]);
		printf("A[0]: %d\n", A[i]);
		printf("*A: %d\n", *A+i);
	}

	




}
