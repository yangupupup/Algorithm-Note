//
// Created by mario on 2023/7/20.
//
// chapter-3.1.3
#include <iostream>
using namespace std;
int n;
int num[10]={0};
bool flag = true;
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>num[i];
    }
    for (int i = 0; i <= n-2; ++i) {
        if (num[i]>num[i+1]){
            flag = false;
            break;
        }
    }
    cout<<(flag ? "YES" : "NO");
    return 0;
}