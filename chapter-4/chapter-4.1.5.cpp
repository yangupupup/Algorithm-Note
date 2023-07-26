//
// Created by mario on 2023/7/26.
//
// chapter-4.1.5
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n;
string str[50];
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>str[i];
    }
    sort(str,str+n);
    for (int i = 0; i < n; ++i) {
        cout<<str[i]<<endl;
    }
    return 0;
}