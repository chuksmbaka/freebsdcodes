#include<stdio.h>

int** returnMemAddr(){
	int randNum = 50;
	int *randNumPointer = &randNum;
	int *p2p = randNumPointer;
	printf("memory address of &randNum: %d\n", &randNum);
	printf("memory addree of randNumPointer: %d\n", randNumPointer);
        printf("value of * randNumPointer: %d\n", *randNumPointer);
	return *p2p;

}

int main(){
	int** memAcceptor = returnMemAddr();
	printf("memory address of randNum: %d\n",* memAcceptor);
	printf("value of randNum: %d\n", *memAcceptor);//does not give the vlaue
	printf("value of randNum: %d\n", (*memAcceptor));	
        //printf("memory address of function returnMemAddr: %d\n", *returnMemAddr);	
	return 0;

}
