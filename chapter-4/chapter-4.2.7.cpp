//
// Created by mario on 2023/7/27.
//
// chapter-4.2.7
/**
 * 思路一个小于k的数x，如果在hash表里有映射，那么判断k-x是否在hash表里有映射，
 * 如果有，则满足条件。
 */
#include <iostream>
using namespace std;

const int MAXN = 100000;
const int MAXK = 1000001;

int a[MAXN], hashTable[MAXK] = {false};
int main(){
    int n,k;
    cin>>n>>k;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        hashTable[a[i]] = true;
    }
    int cnt =0;
    for (int i = 0; i < n; ++i) {
        if (k - a[i] >= 0 && hashTable[k - a[i]]) cnt++;
    }
    cout<<cnt/2;
    return 0;
}