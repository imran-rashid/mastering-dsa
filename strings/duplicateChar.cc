// check whether string contains duplicate char or not

#include <bits/stdc++.h>
using namespace std;

void duplicateChar(string &str){
    int flag = 0;
    int len = str.size();
    for(int i = 0; i < len; i++){
        for(int j = 1+i; j < len; j++){
            if(str[i] == str[j] and i != j){
                flag = 1;
                cout << "duplicate found at postion " << i << " " << j << endl;
            }
        }
    }

    if(flag==0){
        cout << "No duplicate found\n";
    }
}

int main(){
    string str;
    cout << "Enter string ";
    getline(cin, str);
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    duplicateChar(str);
    return 0;
}