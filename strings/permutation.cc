// find the permutation of a string

#include <bits/stdc++.h>
using namespace std;


void perm(string &str, int l, int length){

    if(l == length){
        cout << str << endl;
    } else {
       for(int i = l; i < length; i++){
            swap(str[l], str[i]);
            perm(str, l+1, length);
            swap(str[l], str[i]);
        }
    }
}

int main(){
    string str = "AB";
    int length = str.size();
    int l = 0;
    perm(str,l, length);
}
