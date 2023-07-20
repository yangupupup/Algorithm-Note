//
// Created by mario on 2023/7/20.
//
// chapter-3.2.2
#include <iostream>
#define MAX_LEN 100
using namespace std;
int n;
int number[MAX_LEN]={0};
int x;
int frequency=0;
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>number[i];
    }
    cin>>x;
    for (int i = 0; i < n; ++i) {
        if (x == number[i]) ++frequency;
    }
    cout<<frequency;
    return 0;
}
