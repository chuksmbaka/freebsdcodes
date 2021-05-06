#include<stdio.h>
#include<time.h>

int main(){
	printf("Hello der Welt\n");
	clock_t processor_time = clock();
	printf("processor time: %d\n",processor_time);
	for(int i = 0; i < (int)processor_time + 10*2*10000000/7; i++){
	}
	printf("End time:%d\n ", clock());
	return 0;
}

