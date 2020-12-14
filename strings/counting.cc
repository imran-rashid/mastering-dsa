// counting number of words, vowels and consonants

#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cout << "Enter the sentence ";
	getline(cin, str);

  	transform(str.begin(), str.end(), str.begin(), ::tolower);
	int v = 0;
  	int w = 1;
  	int c = 0;
    int l = str.size();
	if (isspace(str[l-1])){ // if sentence contains whitespace end of string
	    w = 0;
	}

	for(int i = 0; i < l; i++){
		if(str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] =='u'){
	  		v += 1;
		}
		else if (str[i] == ' ' and str[i-1] != ' '){ // if word contains more than one whitespace
            w += 1;
	    } 
	    else if (isalpha(str[i])){
		    c += 1;
		}
	}

  	cout << "Vowels are " << v << endl;
  	cout << "consonants are " << c << endl;
  	cout << "Word(s) is/are " << w << endl;
}