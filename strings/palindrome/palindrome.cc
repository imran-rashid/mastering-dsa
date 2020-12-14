// check the string is palindrome or not

#include <bits/stdc++.h>
using namespace std;

// time complexity is O(n)
bool isPalindrome(string &str){
    string revstr = string(str.rbegin(), str.rend());
    return revstr == str;
}

// time complexity is O(..)
bool is_palindrome(string &str) {
  int s = 0;
  int l = str.size()-1;

  while(s < l){
    if(!(str[s] == str[l])){
      return false;
    }
    s++;
    l--;
  }
  return true;
}

int main(){
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    // convert all chars to lowercase
    string str2="";
    for(int i = 0; i < str.length(); i++){
        if(isupper(str[i])){
            str2 += str[i]+32; 
        } else {
            str2 += str[i];
        }
    }

    bool res = isPalindrome(str2);
    bool result = is_palindrome(str2);
    if(res and result){
        cout << "Palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }
}