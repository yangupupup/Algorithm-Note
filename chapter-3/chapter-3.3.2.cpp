//
// Created by mario on 2023/7/20.
//
// chapter-3.3.2
#include <iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i = 1; i <= n-1; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<"*";
    }
    return 0;
}