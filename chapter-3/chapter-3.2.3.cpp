//
// Created by mario on 2023/7/20.
//
// chapter-3.2.3
#include <iostream>
#define MAX_LEN 1000
using namespace std;
int n;
int number[MAX_LEN]={0};
int K;
int frequency = 0;
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) cin>>number[i];
    cin>>K;
    // O(n^2)
    for (int i = 0; i <= n-2; ++i) {
        for (int j = i+1; j <= n-1; ++j) {
            if (K == (number[i] + number[j])) ++frequency;
        }
    }
    cout<<frequency;
    return 0;
}
