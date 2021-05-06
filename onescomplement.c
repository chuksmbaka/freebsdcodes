#include<stdio.h>

int main(){
	unsigned int integerNumber = 5, integerNumber_inverted;
	integerNumber_inverted = ~integerNumber;

	printf("Inverted 5: %u\n", integerNumber_inverted );

	int operand1 = 1;
	int operand2 = 0;
	//do bitwise AND
	int bitwise_AND = operand1 & operand2;
	printf("\nbitwise AND of 2 and 3: %u\n ", bitwise_AND );

	//shifting operator
	int a, b ;
	a = 20 << 2;
	b = 20 >> 2;
	printf("shift left  and shift right by 2: %d, %d\n ", a, b );

	//charactier arrays
#define SIZE 15
	char name[SIZE];
	//for(int i = 0; i < SIZE; i++)
		fgets(name, SIZE, stdin);
		printf("\n%s", name);
		printf("\n");
		puts(name);

	//array of ints and pointers operation
	int arrayOfIntegers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int *pointerToArrayOfIntegers = arrayOfIntegers;
	int advanceAndDereference = *++pointerToArrayOfIntegers;

	printf("arrayOfIntegers: %d\n", arrayOfIntegers); // displays the address of the array
	printf("\nAdvance and display next integer: %d\n", advanceAndDereference);
	int dereferenceAndIncreament = ++*--pointerToArrayOfIntegers;
	printf("Dereference and increment: %d\n", dereferenceAndIncreament);


	//some pointer and array operations
	printf("Address of the array (&arrayOfIntegers[0]): %u\n", &arrayOfIntegers[0]);
	printf("Address of the array (pointerToArrayOfIntegers: %u\n", pointerToArrayOfIntegers);
	printf("Address of the array pointer (&pointerToArrayOfIntegers): %u\n", &pointerToArrayOfIntegers);
	printf("*(&arrazyOfIntegers[5]): %d\n", *(&arrayOfIntegers[5]));
	printf("*(pointerToArrayOfIntegers+5): %d\n", *(pointerToArrayOfIntegers + 5));




}
