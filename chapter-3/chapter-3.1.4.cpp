//
// Created by mario on 2023/7/20.
//
// chapter-3.1.4
#include <iostream>
using namespace std;
int n;
int num[10]={0};
int sum = 0;
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>num[i];
        if (num[i] %2 ==1){
            sum+=num[i];
        }
    }
    cout<<sum;
    return 0;
}
