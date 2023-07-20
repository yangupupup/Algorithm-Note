//
// Created by mario on 2023/7/20.
//
// chapter-3.1.1
#include <iostream>
using namespace std;
int n;
int step=0;
int main() {
    cin>>n;
    while (n!=1){
        if (n%2==0){
            n/=2;
        } else if (n%2==1){
            n = (3*n+1)/2;
        }
        step++;
    }
    cout<<step;
    return 0;
}