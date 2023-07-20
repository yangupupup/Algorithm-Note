//
// Created by mario on 2023/7/20.
//
// chapter-3.1.5
#include <iostream>
using namespace std;
int n;
int temp[3]={0};
int main(){
    cin>>n;
    int i=0;
    while (n!=0){
        temp[i++] = n%10;
        n/=10;
    }
    // 倒序输出
    for (int j = i-1; j >= 0; --j) {
        cout<<temp[j];
        if (j!=0) cout<<" ";
    }
    return 0;
}
