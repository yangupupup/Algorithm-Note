//
// Created by mario on 2023/10/11.
//
// chapter-4.3.6

#include "iostream"

using namespace std;

int f(int n){
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n >= 3) return f(n-1) + f(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}
