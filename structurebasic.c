#include<stdio.h>

struct point{

	int x;
	int y;

};

int main(){
	struct point pt;
	pt.x = 300;
	pt.y = 150;

	printf("points: (X-%d, Y-%d) ", pt.x, pt.y);

}
