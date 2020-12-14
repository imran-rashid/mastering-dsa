// program for get n-th position's fibonacci number

#include <cstdio>

int fib(int n){
	static int array[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	if (n <= 1){
		array[n] = n;
		return n;
	} else {
		if (array[n-2] == -1){
			array[n-2] = fib(n-2);
		}

		if (array[n-1] == -1){
			array[n-1] = fib(n-1);
		}
		return array[n-1]+array[n-2];
	}
}

int main(){
	int n = 7;
	printf("%d\n", fib(n));
}