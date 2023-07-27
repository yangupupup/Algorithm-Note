//
// Created by mario on 2023/7/27.
//
// chapter-4.2.8
#include <iostream>
using namespace std;
int n,m;
string x;
string temp[1000];
int hashTable[26*26*26+10] = {0};
int hashFunc(string s){
    int id = 0;
    for (int i = 0; i < s.length(); ++i) {
        id = id * 26 +(s[i] - 'A');
    }
    return id;
}
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        hashTable[hashFunc(x)]++;
    }
    cin>>m;
    for (int i = 0; i < m; ++i) {
        cin>>x;
        cout<<hashTable[hashFunc(x)];
        if (i != m-1) cout<<" ";
    }
    return 0;
}
