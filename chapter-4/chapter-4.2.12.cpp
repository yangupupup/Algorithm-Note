//
// Created by mario on 2023/7/27.
//
// chapter-4.2.12
#include <iostream>
using namespace std;
int n,m;
int x;
int hashTable[10001] = {0};
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        hashTable[x]++;
    }
    for (int i = 0; i < m; ++i) {
        cin>>x;
        hashTable[x]--;
    }
    bool isFirst = true;
    for (int i = 1; i <= 10000; ++i) {
        if (hashTable[i] > 0){
            if (!isFirst) cout<<" ";
            for (int j = 0; j < hashTable[i]; ++j) {
                cout<<i;
                if (j != hashTable[i] - 1) cout<<" ";
            }
            isFirst = false;
        }
    }
    return 0;
}