// program for check two strings are anagram or not

#include <bits/stdc++.h>
using namespace std;

// time complexity is O(nlogn)
bool isAnagram(string &str1, string &str2){
    // anagram should be same length
    if (str1.length() != str2.length()){
        return false;
    }

    // sorting the strings are in place ascending order
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // if both contains same chars return True
    return str1 == str2;
}

// time complexity is O(n) and space is O(1)
bool is_anagram(string &str1, string &str2){
    // anagram should be same length
    if (str1.length() != str2.length()){
        return false;
    }

    int count = 0;
    for(auto &i: str1) count += i;
    for(auto &i: str2) count -= i;
    return count == 0;
}

int main(){
    string str1;
    cout << "Enter string ";
    getline(cin, str1);

    string str2;
    cout << "Enter another string ";
    getline(cin, str2);

    // convert all chars to lower in place
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    bool ana = isAnagram(str1, str2);
    bool anagram = is_anagram(str1, str2);

    if(ana and anagram){
        cout << "strings are Anagram\n";
    } else {
        cout << "Strings are not Anagram\n";
    }
    return 0;
}