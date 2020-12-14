// change the string case upper to lower followed by lower to upper
// HeLLo -> hEllO

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout << "Enter the string ";
	getline(cin, str);

	string str2 = "";
	for(int i = 0; i < str.size(); i++){
		if(islower(str[i])){
			str2 += str[i]-32;
		}
		else if (isupper(str[i])){
			str2 += str[i]+32;
		}
		else {
			str2 += str[i];
		}
	}

	cout << "The string is " << str << endl;
	cout << "The swapcase string is " << str2 << endl;
	return 0;
}
