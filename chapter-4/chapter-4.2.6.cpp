//
// Created by mario on 2023/7/27.
//
// chapter-4.2.6
/**
 * ascii码：0~255 唯一的
 * 只需要开辟一个最大256的数组空间即可
 */
#include <iostream>
using namespace std;
bool temp[256] = {false};
string s1,s2;
int main(){
    cin>>s1;
    cin>>s2;
    for (int i = 0; i < s1.length(); ++i) temp[s1[i]] = true;
    for (int i = 0; i < s2.length(); ++i) {
        if (temp[s2[i]]) cout<<1;
        else cout<<0;
        if (i != s2.length()-1) cout<<" ";
    }
    return 0;
}
