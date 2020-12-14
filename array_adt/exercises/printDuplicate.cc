// find the duplicates element in an sorted array

#include <iostream>
using namespace std;

int main(){
	int array[] = {3,6,8,8,10,12,15,15,15,20};
	int length = sizeof(array)/sizeof(int);
	int lastduplicate = 0;

	// O(n)
	for (int i = 0; i < length-1; i++){
		if (array[i] == array[i+1] and array[i] != lastduplicate)
			cout << "duplicate value is " << array[i] << endl;
			lastduplicate = array[i];
	}
}