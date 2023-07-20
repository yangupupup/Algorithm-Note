//
// Created by mario on 2023/7/20.
//
// chapter-3.1.6
#include <iostream>
#include <cmath>
using namespace std;
int n;
int temp[3]={0};
int main(){
    cin>>n;
    int m = n;
    int i=0;
    while (n!=0){
        temp[i++] = n%10;
        n/=10;
    }
    int sum=0;
    for (int j = 0; j < i; ++j) {
        sum += (temp[j]*temp[j]*temp[j]);
    }
    cout<<(m==sum ? "YES" : "NO");
    return 0;
}