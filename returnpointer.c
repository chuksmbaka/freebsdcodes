#include<stdio.h>
#include<stdlib.h>


int* allocateArray(int size, int value){
	int* arr = (int*)malloc(size*sizeof(int));//arr is a pointer to int (array of ints)
	printf("arr: %u\n", arr);//this displazs the address of the array
	for(int i=0; i<size; i++){
		arr[i]=value;
	}
	return arr;  //returns the memory address of the array
}

int main(){
	int* vector = allocateArray(5, 0);

	//dsiplay
	for(int i=0; i<5; i++){
		printf("%d, ", vector[i]);
	}
	printf("\n");

	//Can we modify the array here?
	//try change one of the array elements to 3000
	vector[0] = 3000;
	for(int i=0; i<5; i++){
		printf("%d, ", vector[i]);
	}
	printf("\n");
	free(vector); //frees the memory
	return 0;
}
