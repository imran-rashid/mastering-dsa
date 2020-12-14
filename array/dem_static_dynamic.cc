#include <cstdio>

int main(){
	int array[] = {2, 4};
	int *p = new int[3] {10, 20, 30};

	for(auto & i: array) printf("%d\n", i);
	printf("\n");
	for(int i = 0; i < 3; i++) printf("%d\n", i[p]);

	delete []p;
	p = nullptr;
}