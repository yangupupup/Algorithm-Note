//
// Created by mario on 2023/7/27.
//
// chapter-4.2.10
#include <iostream>
using namespace std;
int n,m;
int x;
bool hashTable[10001] = {false};
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
       cin>>x;
       hashTable[x] = true;
    }
    for (int i = 0; i < m; ++i) {
        cin>>x;
        hashTable[x] = true;
    }
    bool isFirst = true;
    for (int i = 1; i <= 10000; ++i) {
        if (hashTable[i]){
            if (!isFirst){
                cout<<" ";
            }
            cout<<i;
            isFirst = false;
        }
    }
    return 0;
}