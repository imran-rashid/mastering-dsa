// C/C++ array size is fixed, once it is created can't be resized/reallocated

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p = (int *)malloc(5*sizeof(int)); // *p = new int[5]
	p[0] = 10;
	p[1] = p[0]+2;
	p[2] = p[1]+2;
	p[3] = p[2]+2;
	p[4] = p[3]+2;

	int *q = (int *)malloc(10*sizeof(int)); // *p = new int[5]
	for(int i = 0; i < 5; i++){
		q[i] = p[i];
	}

	free(p); // delete []p
	p = q;
	q = NULL;

	p[5] = 100;
	p[6] = 200;

	for(int i = 0; i < 7; i++){
		printf("%d\n", p[i]);
	}
}