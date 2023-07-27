//
// Created by mario on 2023/7/27.
//
// chapter-4.2.5
#include <iostream>
using namespace std;
bool hashTable[26] = {false};
int hashFunc(char c){
    return c - 'a';
}
string s1,s2;
int main(){
    cin>>s1;
    cin>>s2;
    for (int i = 0; i < s1.length(); ++i) {
        hashTable[s1[i]] = true;
    }
    for (int i = 0; i < s2.length(); ++i) {
        if (hashTable[s2[i]]) cout<<1;
        else cout<<0;
        if (i != s2.length() - 1) cout<<" ";
    }
    return 0;
}
