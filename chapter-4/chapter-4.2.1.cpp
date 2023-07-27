//
// Created by mario on 2023/7/27.
//
// chapter-4.2.1
#include <iostream>
#define MAX_CNT 100
using namespace std;
int n;
int num[MAX_CNT+1] = {0};
int temp;
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>temp;
        num[temp]++;
    }
    for (int i = 1; i <= MAX_CNT; ++i) {
        if (num[i] != 0){
            cout<<i<<" "<<num[i]<<endl;
        }
    }
    return 0;
}
