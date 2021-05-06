#include<stdio.h>
#define ARRSIZE 10

float average(int *arr, int size){
	int sum;
	printf("arr: %p\n", &arr);
	printf("size: %p\n", &size);
	printf("sum: %p\n", &sum);
	//modify the arry from the function
	arr[5]=200;

	for(int i = 0; i<size; i++){
		sum += arr[i];

	}

	return (sum*1.0f)/size;
	

}

void displayArray(int *arr, int size){
	printf("Array: [ ");
	for(int i = 0; i<size; i++){
		printf("%d,  ", arr[i]);
	}
	printf(" ]\n");
 



}
int main(){

	int arrr[ARRSIZE] = {10,20,30,40,50,60,70,80,90,100};
	displayArray(arrr, ARRSIZE);
//	int *p = arrr;
	average(arrr, ARRSIZE);
	printf("After, \n");
	displayArray(arrr, ARRSIZE);
	return 0;

}
