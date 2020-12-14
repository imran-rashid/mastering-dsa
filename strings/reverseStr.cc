// reverse the string
// https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/

#include <bits/stdc++.h>
using namespace std;

// own function
void swapreverse(string str){
    int start = 0;
    int length = str.length()-1;
    while (start < length){
        swap(str[start], str[length]);
        start++;
        length--;
    }
    cout << str << endl;
}

int main(){
    string str;
    cout << "Enter str ";
    getline(cin, str);

    // modify original str
    // reverse(str.begin(), str.end());

    // str should be mutable
    string revstr = string(str.rbegin(), str.rend());
    cout << "Original string is " << str << endl;
    cout << "Reverse string is " << revstr << endl;

    swapreverse(str);
}