// find the length of a string

#include <cstdio>
#include <cstring>
#include <string> // for cpp
using namespace std;

int main(){
	// cpp version
	string str = "Hello World, Dhaka";
	int length = str.length(); // 18

	// c version
    char str_[] = "Hello World";
    int len = strlen(str_); // 11

	printf("%d\n",len);
	printf("%d\n",length);
	return 0;
}