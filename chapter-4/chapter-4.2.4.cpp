//
// Created by mario on 2023/7/27.
//
// chapter-4.2.4
#include <iostream>
#define MAX_NUM 1000
using namespace std;
int n,m,x;
int temp[MAX_NUM+1] = {0};
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        temp[x]++;
    }
    for (int i = 0; i < m; ++i) {
        cin>>x;
        cout<<temp[x];
        if (i != m-1) cout<<" ";
    }
    return 0;
}
