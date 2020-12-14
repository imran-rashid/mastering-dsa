// check string is valid or not
// gh45 valid -> gh% invalid

#include <bits/stdc++.h>
using namespace std;

bool validStr(string str){
    for(auto &i: str){
        if(!(isalpha(i) or isdigit(i))){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cout << "Enter the str ";
    getline(cin, str);

    bool result = validStr(str);
    if(result){
        cout << "Valid string" << endl;
    } else {
        cout << "not valid string" << endl;
    }
}