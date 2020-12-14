// check how many times duplicate values are occurred in sorted array

#include <iostream>
using namespace std;

int main(){
	int array[] = {3,6,8,8,10,12,15,15,15,20};
	int length = sizeof(array)/sizeof(int);
	int j = 0;

	// O(n)
	for (int i = 0; i < length-1; ++i){
		if (array[i] == array[i+1]){
			j = i; // 2
			while (array[j] == array[i]){
				j++;
			}
			cout << array[i] << " is occurred " << (j-i) << " times" << endl;
			i = j - 1;
		}
	}
}