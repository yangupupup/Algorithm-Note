//
// Created by mario on 2023/7/20.
//
// chapter-3.3.1
#include <iostream>
using namespace std;
int n;
int main(){
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <=i ; ++j) cout<<"*";
        if (i != n) cout<<endl;
    }
    return 0;
}
