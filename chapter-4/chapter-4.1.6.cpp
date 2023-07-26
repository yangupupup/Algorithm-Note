//
// Created by mario on 2023/7/26.
//
// chapter-4.1.6
#include <iostream>
#include <algorithm>
using namespace std;
int n;
string str[50];
int cmp(string s1,string s2){
    return s1 > s2;
}
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>str[i];
    }
    sort(str,str+n,cmp);
    for (int i = 0; i < n; ++i) {
        cout<<str[i]<<endl;
    }
    return 0;
}
