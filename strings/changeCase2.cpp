// change the case of string without stl

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str = "HELLO";
	string str2 = "";

	for(int i = 0; i < str.length(); i++){
		str2 += str[i]+32;
	}

	cout << str2 << endl;
}