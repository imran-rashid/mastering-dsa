// change the case of a string using stl

#include<bits/stdc++.h> 
using namespace std;

int main(){
	string str = "HELLO";
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << str << endl;
}