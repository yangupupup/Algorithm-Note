//
// Created by mario on 2023/10/11.
//
// chapter-4.3.5

#include "iostream"

using namespace std;

int f(int n){
    if (n == 0) return 1;
    else return n*f(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}