#include<stdio.h>

#define ALLOCSIZE 1000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n){
	if(allocbuf + ALLOCSIZE - allocp >= n){
		allocp = allocp + n;
		return allocp - n;

	}
	else
		return 0;

}

int main(){
	alloc(20);
	retuen 0;

}
