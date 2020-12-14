// string is palindrome or not without reverse

#include <iostream>
#include <string>
using namespace std;



int main(){
  string str;
  cout << "Enter the string: ";
  getline(cin, str);

  bool res = is_palindrome(str);
  if(res){
    cout << "Palindrome" << endl;
  } else {
    cout << "not palindrome" << endl;
  }
}