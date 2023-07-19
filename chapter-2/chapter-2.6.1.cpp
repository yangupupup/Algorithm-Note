//
// Created by mario on 2023/7/19.
//
// chapter-2.6.1
#include <iostream>
using namespace std;
int increase(int x){
    return ++x;
}
int main() {
    int n;
    cin>>n;
    cout<<increase(n)<<" "<<n;
    return 0;
}
