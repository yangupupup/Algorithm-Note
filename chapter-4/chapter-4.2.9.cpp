//
// Created by mario on 2023/7/27.
//
// chapter-4.2.9
/**
 * 对于空格的处理：
 * 除了第一个数之外，输出 由一个空格+一个数组成
 */
#include <iostream>
using namespace std;
int n,m;
int x;
bool hashTable1[10000] = {false};
bool hashTable2[10000] = {false};
int num =0;
int temp[10000] = {0};
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        hashTable1[x] = true;
    }
    for (int i = 0; i < m; ++i) {
        cin>>x;
        hashTable2[x] = true;
    }
    for (int i = 1; i <10000; ++i) {
        if (hashTable1[i] && hashTable2[i]) temp[num++] = i;
    }
    for (int i = 0; i < num; ++i) {
        cout<<temp[i];
        if (i != num-1) cout<<" ";
    }
    return 0;
}
