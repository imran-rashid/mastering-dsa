#include <cstdio>

int main(){
	// we can declare and initialize array in various way
	int A[5]; // values are now garbage until set
	int B[5] = {2, 4, 6, 8, 9};
	int C[] = {2,4,6,7,8,9,10};
	int D[5] = {2,4}; // remaining will be fill up 0
	int E[5] = {-1}; // remaining will be fill up 0
	E[4] = 50;

	for(auto &i: E){
		printf("%d\n", i); // -1 0 0 0 50
	}

	printf("\n");
	// print the values various way
	printf("%d\n", C[5]); // 9
	printf("%d\n", 3[B]); // 8
	printf("%d\n", *(E+2)); // 0
}