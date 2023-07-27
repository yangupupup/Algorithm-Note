//
// Created by mario on 2023/7/27.
//
// chapter-4.2.3
#include <iostream>
#define MAX_NUM 1000
using namespace std;
int n,m;
int x;
bool num[MAX_NUM+1] = {false};
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        num[x] = true;
    }
    for (int i = 0; i < m; ++i) {
        cin>>x;
        if (num[x]) cout<<1;
        else cout<<0;
        if (i != m-1) cout<<" ";
    }
    return 0;
}