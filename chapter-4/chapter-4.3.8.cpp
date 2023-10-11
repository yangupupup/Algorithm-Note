//
// Created by mario on 2023/10/11.
//
// chapter-4.3.8

#include "iostream"
#include "cstring"

using namespace std;

string s1;

string reverse(int n){
    if (n == 1) return s1.substr(0,1);
    else {
        return s1.substr(n-1,1) + reverse(n-1);
    }
}

int main(){
    cin>>s1;
    if (s1 == reverse(s1.length())) cout<<"Yes";
    else cout<<"No";
    return 0;
}
