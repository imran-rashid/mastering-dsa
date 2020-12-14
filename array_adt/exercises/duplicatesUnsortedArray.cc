// find the duplicates in an unsorted array

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
	int array[] = {10,40,10,20};
	int length = sizeof(array)/sizeof(int);
	int count = 1;

	for (int i = 0; i < length; i++){
		for(int j = 1; j < length; j++){
			if (array[i] == array[j]){
				count++;
				cout << array[i] << endl;
			}
		}
	}
	return 0;
}