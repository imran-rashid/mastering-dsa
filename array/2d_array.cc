#include <iostream>
using namespace std;

int main(){
	// 1st way
	int A[3][3] = {{0,1,2},{4,5,6},{7,8,9}}; // inside stack

	for (int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

	// 2nd way
	int *B[3]; // stack and heap
	B[0] = new int[2];
	B[1] = new int[2];
	B[2] = new int[2];

	// 3rd way
	int **C; // inside heap
	C = new int *[3];
	C[0] = new int[2];
	C[1] = new int[2];
	C[2] = new int[2];

	// delete
	delete []C;
	delete []C[0];
	delete []C[1];
	delete []C[2];

	delete []B[0];
	delete []B[1];
	delete []B[2];
}