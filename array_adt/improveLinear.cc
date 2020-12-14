// impreve the linear search using swaping

#include <iostream>
using namespace std;

int linearSearch(int array[], int key, int length){
	for(int i = 0; i < length; i++){
		if (key == array[i]){
			// it is called transposition
			int temp = array[i];
			array[i] = array[i-1];
			array[i-1] = temp;

			return i-1;
		}
	}
	return false;
}

int main(){
	int array[] = {4,5,6,7,8,9};
	int key = 9;
	int length = sizeof(array)/sizeof(int);
	int result = linearSearch(array, key, length);
	if (result){
		cout << "Found at position " << result << endl;;
	} else {
		cout << "not found\n";
	}

	for(auto & i: array){
		cout << i << " ";
	}
	cout << endl;

}